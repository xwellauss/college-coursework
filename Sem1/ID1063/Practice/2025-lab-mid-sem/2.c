#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef enum
{
	T_MULTIPLIER = 0,
	T_ELEMENT,
	T_UNIT_START,
	T_UNIT_END,
} TokenType;

typedef struct
{
	TokenType type;
	int multiplier;
	int mass;
} Token;

Token tokens[100];
int total_tokens = 0;

char symbols[30][3] =
{
	"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne",
	"Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca",
	"Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn"
};

int masses[30] =
{
	1, 4, 7, 9, 11, 12, 14, 16, 19, 20,
	23, 24, 27, 28, 31, 32, 35, 40, 39, 40,
	45, 48, 51, 52, 55, 56, 59, 59, 64, 65
};

int element_mass(char element[3])
{
	for(int k = 0; k < 30; k++)
	{
		if(strcmp(element, symbols[k]) == 0)
		{
			return masses[k];
		}
	}

	return 0;
}

void tokenize(char* str)
{
	int i = 0;
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			Token t;
			t.type = T_ELEMENT;

			char element[3];
			element[0] = *str;
			element[2] = '\0';

			int len = 1;
			if(*(str+1) >= 'a' && *(str+1) <= 'z')
			{
				element[1] = *(str+1);
				len = 2;
			}
			else
			{
				element[1] = '\0';
				len = 1;
			}

			t.mass = element_mass(element);
			t.multiplier = 1;

			tokens[i++] = t;
			str += len;
		}
		else if(*str == '[' || *str == '(')
		{
			Token t;
			t.type = T_UNIT_START;

			tokens[i++] = t;

			str++;
		}
		else if(*str == ']' || *str == ')')
		{
			Token t;
			t.type = T_UNIT_END;

			tokens[i++] = t;
			str++;
		}
		else if(*str >= '0' && *str <= '9')
		{
			Token t;
			t.type = T_MULTIPLIER;

	
			int multipler = 0;
			while(*str >= '0' && *str <= '9')
			{
				multipler = multipler * 10 + (*str - '0');
				str++;
			}

			t.multiplier = multipler;
			tokens[i++] = t;
		}
	}

	total_tokens = i;
}

int tokens_mass(int* i)
{
	int mass = 0;

	while(*i < total_tokens)
	{
		switch(tokens[*i].type)
		{
			case T_ELEMENT:
			{
				int m = tokens[*i].mass;
				(*i)++;

				int mul = 1;
				if(*i < total_tokens && tokens[*i].type == T_MULTIPLIER)
				{
					mul = tokens[*i].multiplier;
					(*i)++;
				}

				mass += m * mul;
				break;
			}
			case T_MULTIPLIER:
			{
				(*i)++;
				break;
			}
			case T_UNIT_START:
			{
				(*i)++;
				int unit_mass = tokens_mass(i);

				if(*i < total_tokens && tokens[*i].type == T_UNIT_END)
					(*i)++;

				int mul = 1;
				if(*i < total_tokens && tokens[*i].type == T_MULTIPLIER)
				{
					mul = tokens[*i].multiplier;
					(*i)++;
				}


				mass += unit_mass * mul;
				break;
			}
			case T_UNIT_END:
			{
				return mass;
			}
		}
	}

	return mass;
}

int calculate_mass(char* str)
{
	tokenize(str);

	int i = 0;
	return tokens_mass(&i);
}

int main()
{
	char formula[101];
	scanf("%100[^\n]", formula);

	int molar_weight = calculate_mass(formula);	


	printf("%d\n", molar_weight);

	return 0;
}
