#include <stdio.h>
#include <math.h>

float f(float x)
{
	return x*x*x - x - 2.0;
}

int main()
{
	float a = 1.0;
	float b = 2.0;

	float m;
	while(b - a > pow(10, -6))
	{
		m = (a+b)/2.0;
		float f_m = f(m);
		
		if(f_m > 0) b = m;
		else if(f_m < 0) a = m;
		else break;
	}

	printf("%f\n", m);

	return 0;
}
