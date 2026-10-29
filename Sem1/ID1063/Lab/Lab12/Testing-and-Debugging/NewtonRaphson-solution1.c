#include <stdio.h>
#include <math.h>

double kth_root(double a, int k)
{
    /* Implement the Newton-Raphson method. */
    if(a==0) return 0.0;
    
    double x;
    
    if(a>=1) x = a;
    else if(a<1) x = 1;
    
    double fun = x;
    for(int i=1;i<k;i++){
        fun = fun*x;
    }
    fun = fun - a;
    
    double funD = k;
    for(int i=0;i<k-1;i++){
        funD = funD*x;
    }
    double xn;
    xn = x - (fun/funD);
    
    if(xn > x){
       if(xn - x <0.0001){
           return xn;
       }
    }
    else if(xn <= x){
        if(x - xn <0.0001){
           return xn;
       }
    }
    
    return kth_root(xn,k);
}

int main(void)
{
    double a;
    int k;

    /* Read the input, call kth_root, and print the result. */
    scanf("%lf %d",&a,&k);
    printf("%.6f",kth_root(a,k));
    

    return 0;
}
