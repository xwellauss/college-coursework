#include <stdio.h>

int main(void)
{
    int n;
    
    int required[100], available[100];
    int batch=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&required[i]);
        scanf("%d",&available[i]);
    }
for(int i=0;i<n;i++){
    while(required[i]<=available[i]){
        available[i]=available[i]-required[i];
        batch=batch+1;
        
        
    }
    
    
}printf("%d ",batch);
    /* Read the input. */

    /* Determine and print the maximum number of complete batches. */

    return 0;
}
