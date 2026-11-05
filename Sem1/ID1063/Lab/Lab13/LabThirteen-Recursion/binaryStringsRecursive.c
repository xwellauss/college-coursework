#include<stdio.h>
#include<string.h>

/* Prints all binary strings with the first pos characters 
fixed and the remaining taking each value in {0,1}.*/
void binary(char *str, int pos, int n)
{
    if (pos==n)
    {
        str[n]='\0';
		printf("\n %s",str);
        return;
    }

	str[pos]='0';
	binary(str,pos+1,n);
	str[pos]='1';
    binary(str,pos+1,n);    
}

void ternary(char *str, int pos, int n)
{
    if (pos==n)
    {
        str[n]='\0';
		printf("\n %s",str);
        return;
    }

	str[pos]='0';
	ternary(str,pos+1,n);
	str[pos]='1';
    ternary(str,pos+1,n);    

	str[pos]='2';
	ternary(str,pos+1,n);    
}

int main()
{
    char text[5];
    ternary(text,0,4);
	return 0;
}
