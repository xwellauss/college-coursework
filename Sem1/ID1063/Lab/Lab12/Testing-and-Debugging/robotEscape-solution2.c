#include <stdio.h>

int main(void)
{
    int n, k ,x;
    char a[1001];
    char L , R;
    /* Read the input. */
    scanf("%d %d" , &n , &k);
    for(int i=0 ; i<10000; i++){
        scanf(" %c" , &a[i]);
    }
    
    for(int i=0 ; i<10000; i++){
        if(a[i]==R){
            k=k+1;
        }
        if(a[i]==L){
            k=k-1;
        }
        if(k==0){
                k-1==0;
            }
        
        if(k=n && a[i+1]==R){
            x=i+1;
            break;
        }
        
    }
    
    printf("%d" , x);
    
     
    /* Process the instructions and print the result. */

    return 0;
}
