#include <stdio.h>
#include<math.h>

int is_stable(int readings[], int start, int end, int limit) 
{
    /* Define is_stable here. Do not change the array or perform input/output. */
    
    int count = 0;
    int maxCount = 0;
    int i = 0;
    int j = 0;
    
    int n = end;
    
    for( i  = 0; i < n-1; i++) {
        for( j = i+1; j <n-1; j++) {
            if(abs(readings[i] - readings[j]) <= limit) {
                count++;
                maxCount = count;
                
                if(maxCount >= count) {
                    start = i;
                    end = j;
                }
            }
            
            else if(abs(readings[i] - readings[j]) > limit) {
                return 0;
            }
        }
        
        count = 0;

    }
    
    // if(maxCount == 0) {
    //     return 0;
    // }
    
    return maxCount;
}





int main(void)
{
    /* Read n and D, then store the readings in a one-dimensional array. */
    int n, D;
    
    scanf("%d %d", &n, &D);
    
    int temp[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
    }
    
    // int start = 0;
    // int end = 0;
    int i = 0;
    int j = 0;
    
    int ans = is_stable(temp, i, j, D);
    
    printf("%d %d", i-j, ans);
    
    
    
    

    /* Use is_stable to find the longest section and apply the tie rule. */

    /* Print the starting position and length. */

    return 0;
}