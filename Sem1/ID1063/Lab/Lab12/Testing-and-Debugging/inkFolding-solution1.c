#include <stdio.h>

double fold_once(double x, double length)
{
    if(x>length/2){
        x=length-x;
    }
    if(x<=length/2){
        x=x;
    }
    /* Write your code here. */
    return x; /* Placeholder. */
}

double position_after_folds(double x, double L, int k)
{
    int count;
    count=1;
    double result;
    while(count<k){
        result=fold_once(x,L);
        count=count+1;
        x=result;
        L=L/2;
    }
    /* Write your code here. */
    return result; /* Placeholder. */
}

int main(void)
{
    double X,Length;
    int K;
    scanf("%lf %lf %d",&Length,&X,&K);
    printf("\n");
    int count;
    count=1;
    double result;
    while(count<K){
        result=fold_once(X,Length);
        count=count+1;
        X=result;
        Length=Length/2;
    }
    double answer;
    answer=X;
    printf("%0.4f",answer);
    return 0;
}
