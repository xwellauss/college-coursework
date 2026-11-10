#include"mymath.h"
#define PI 3.1416

//Self-explanatory
double circleArea(double radius)
{
	double area;
	area=PI*radius*radius;
	return area;
}

// powermod(a,b,n) finds a^b modulo n
// Here, a is an integer and b,n are non-negative integers.
long powermod(long a,unsigned long b, unsigned long n)
{
	unsigned long i=1;
	long result=1;
	while (i<=b)
	{
		result=(result*a)%n;
		i=i+1;
	}
	return result;
}

// Finds a square root of a number x numerically using the Newton-Raphson method
double squareRoot(double x)
{
	double y;
	int i=0;
	y=a/2;
	while (i<=100)
	{
		y=y-(y*y-a)/(2*y);
		i=i+1;
	}
	return x;
}

