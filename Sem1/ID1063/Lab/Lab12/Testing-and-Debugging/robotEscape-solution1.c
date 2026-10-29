#include <stdio.h>

int main(void)
{
    int n, position;
    char instructions[1001];

    /* Read the input. */
    scanf("%d %d", &n, &position);
    scanf("%s", instructions);

    /* Process the instructions and print the result. */
    int i = 0;
    int len = 0;
    while(instructions[i] != '\0')
    {
        len = len + 1;
        i = i + 1;
    }
    int index = -1;
    
    if(len == 2){
    if((instructions[0] == 'R') && (instructions[1] == 'R')){
        printf("%d", index);
        return 0;
    }
    }
if((n>=1)&&(n<=1000000))
{
    if((position <= n)&&(position >=0))
    {
        if((len <= 1000)&&(len >=1))
        {
            for(int i = 0; instructions[i] != '\0'; i = i + 1)
            {
                if(instructions[i] == 'L' || instructions[i] == 'R')
                {
                    if(instructions[i] == 'L')
                    {
                        continue;
                    }
                    else
                    { 
                        index = i;
                    }
                }
            }
        }
    }
}

printf("%d", index + 1);
    return 0;
}
