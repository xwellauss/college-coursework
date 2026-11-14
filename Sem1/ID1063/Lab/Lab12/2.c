#include <stdio.h>
#include <string.h>

#define MAX_ELEMENTS 112

typedef struct
{
	int atomic_number;
	char name[32];
	char symbol[4];
	double atomic_mass;
} Element;

typedef struct
{
	char name[128];
	char formula[128];
} Molecule;

Element elements[MAX_ELEMENTS];

void print_element_z(int z)
{
	Element e = elements[z-1];

	printf("%s %s %f\n", e.name, e.symbol, e.atomic_mass);
}

double get_symbol_mass(char symbol[4])
{
	for(int i = 0; i < MAX_ELEMENTS; i++)
	{
		Element e = elements[i];

		if(strcmp(symbol, e.symbol) == 0)
		{
			return e.atomic_mass;
		}
	}

	return 0.0;
}

Molecule create_molecule(char name[], char formula[])
{
	Molecule m;

	strcpy(m.name, name);
	strcpy(m.formula, formula);

	return m;
}

double molar_mass(Molecule m, Element* elems)
{
	char* str = m.formula;

	double mass = 0.0;

	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] != '\0' && str[i] >= 'A' && str[i] <= 'Z')
		{
			char symbol[4];

			int k = 0;
			symbol[k++] = str[i++];

			while(str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
			{
				symbol[k++] = str[i++];
			}
			symbol[k] = '\0';

			int multiplier = 0;
			while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
			{
				int digit = str[i] - '0';
				multiplier *= 10;
				multiplier += digit;
				i++;
			}

			if(multiplier == 0) multiplier = 1;

			mass += get_symbol_mass(symbol) * multiplier;
		}
		else i++;
	}

	return mass;
}

int main()
{

	FILE* fp = fopen("chemicalElements-v2.txt", "r");

	char line[512];
	int t = 0;
	while(fgets(line, sizeof(line), fp) != NULL)
	{
		line[strcspn(line, "\n")] = '\0';
		int len = strlen(line);

		Element e;

		sscanf(line, "%d,%3[^,],%13[^,],%lf", &e.atomic_number, e.symbol, e.name, &e.atomic_mass);

		elements[t++] = e;
	}

	Molecule m = create_molecule("Water", "C12H22O11");
	printf("%f\n", molar_mass(m, elements));

	fclose(fp);

	return 0;
}
