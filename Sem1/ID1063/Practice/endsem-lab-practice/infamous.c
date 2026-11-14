#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char text[1003];
    int lengths[1001];

    scanf("%1000[^\n]", text);
    
    int command_count = 0;
    bool in_quotes = false;
    
    int i = 0;
    int cmd_length = 0;
    while(text[i] != '\0')
    {
        if(text[i] == '"')
        {
            in_quotes = !in_quotes;
            i++;
        }
        else if(text[i] == '\\')
        {
            cmd_length += 1;
            i += 2;
        }
        else if(!in_quotes && text[i] == ',')
        {
            lengths[command_count++] = cmd_length;
            cmd_length = 0;
            i++;
        }
        else
        {
            if(text[i] != '\0')
            {
                cmd_length++;
                i++;
            }
        }
    }
    lengths[command_count++] = cmd_length;
    cmd_length = 0;
    
    printf("%d\n", command_count);
    for(int i = 0; i < command_count; i++)
    {
        printf("%d", lengths[i]);
        if(i != command_count-1) printf(" ");
    }
    printf("\n");

    return 0;
}
