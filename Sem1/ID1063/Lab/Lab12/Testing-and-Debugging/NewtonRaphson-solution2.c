#include <stdio.h>
#include <math.h>

double kth_root(double a, int k)
{
    /* Implement the Newton-Raphson method. */
    if(a==0) return 0;
    
    double x;
    if(a >= 1){
        x = a;
    }
    else{
        x = 1;
    }
    
    double xnew = 0;
    
    double f = 1;
    for(int i = 0; i < k;i++){
        f= x*f;
    }
    f = f - a;
    
    double fdash =1;
    for(int i = 0; i < k-1; i++){
        fdash = x * fdash;
    }
    fdash = fdash * k;

    double ratio = f/fdash;
    
    // xnew = pow(x,k) * (k-1) + a;
    
    // while( fabs(xnew - x) > 0.0001){
    //     xnew = x -ratio;
    //     x = xnew;
    // }
    for(int i = 0; i < 50; i++){
        xnew = x - ratio;
        if( fabs(xnew - x) < 0.0001){
            x = xnew;
            break;
        }
        x = xnew;
    }

    return x;
}

int main(void)
{
    double a;
    int k;

    /* Read the input, call kth_root, and print the result. */
    scanf("%lf %d", &a, &k);
    double ans = kth_root(a, k);
    
    printf("%0.6f", ans);
    return 0;
}
