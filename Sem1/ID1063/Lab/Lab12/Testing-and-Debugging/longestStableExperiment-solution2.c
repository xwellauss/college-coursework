#include <stdio.h>
#include <math.h>

int max = -1e9;
int startind = 0;

int is_stable(int readings[], int start, int end, int limit) 
{
    /* Define is_stable here. Do not change the array or perform input/output. */
    int highest = readings[0];
    int lowest = readings[0];
    
    for(int i = start;  i <= end; i++){
        if(readings[i] < lowest){
            lowest = readings[i];
        }
        
        if(readings[i] >= highest){
            highest = readings[i];
        }
    }
    
    int length = end - start + 1;
    
    if(highest - lowest <= limit){
         
        if(max < length){
            startind = start;
            max = length;
        }
        
        if(max == length){
            if(startind < start){
                startind = startind;
            }
            else{
                startind = start;
            }
        }
    }
    
    return 0;

}

int main(void)
{
    /* Read n and D, then store the readings in a one-dimensional array. */
    int n,D;
    scanf("%d %d", &n, &D);
    
    int readings[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &readings[i]);
    }

    /* Use is_stable to find the longest section and apply the tie rule. */
    for(int i = 0; i < n; i++){
        for(int j = i; j < n;j++){
           int ans = is_stable(readings, i, j, D);
        }
    }
    /* Print the starting position and length. */
    printf("%d %d", startind, max);
    return 0;
}