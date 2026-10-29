#include <stdio.h>

int main(void)
{
    int n;
    int required[100], available[100];

    /* Read the input. */
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            scanf("%d",&required[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&available[i]);
    }
    

    /* Determine and print the maximum number of complete batches. */
    int max=0;
    for(int i=1;i<=n;i++)
    {
        if(max<required[i])
        {
            max=required[i];
        }
    }
    for(int j=1;j<=max;j++)
    {
    for(int i=1;i<=n;i++)
    {
        if(required[i]>available[i])
        {
            max=0;
            break;
        }
        else if(max*required[i]<=available[i])
        {
            continue;
        }
        else 
        {
            max--;
            break;
        }
               
    }
    if(max==0) break;
    }
    
    
    printf("%d",max);
    return 0;
}
