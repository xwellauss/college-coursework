#include <stdio.h>

int main(void)
{
    char text[1003];
    int lengths[1001];
    int open=0,backs=0,commands=0,closed=0,backi=0,temp=0,sub=0,len=0;
    
    /* Read the input line. */
    scanf("%1001s[^/n]",text);

    /* Determine the number of commands and their lengths. */
    for(int i=0; text[i]!='\0';i++)
    {
        len++;
        if(text[i]=='\\' ){backs=1; backi=i;}
        if(text[i]=='\\' && i==backi+1){backs=0; if(text[i-1]=='\\' && i!=0); }
        if(text[i]==',' && backs==1){backs=0;sub=sub-1;}
        if(text[i]=='"' && backs==1){backs=0; sub=sub-1;}
        else if(text[i]=='"' && open==1 && backs==0){open=0; closed=i; sub=sub-2;}
        else if(text[i]=='"' && open==0 && backs==0 && i!=closed){open=1; sub=sub-2;}
        else if(text[i]==',' && open==0 && backs==0)
        {
            if(text[i-1]==',' && i!=0) sub=sub-2;
            commands++;
            lengths[commands-1]=i-temp+1+sub;
            sub=0;
            temp=i;
        }
        
    }
    if(commands==0) lengths[0]=len; 
    lengths[commands]=len-temp-1;

    /* Print the required output. */
    printf("%d\n",commands+1);
    for(int i=0; i<commands+1; i++)
    {
        if(i==0) printf("%d ",lengths[0]-1);
        else printf("%d ",lengths[i]);
    }
    
    return 0;
}
