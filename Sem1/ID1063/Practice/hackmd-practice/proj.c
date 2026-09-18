#include <stdio.h>

int main()
{
	float u;
	scanf("%f", &u);

	float h = 0;

	int t = 0;

	float v = u;
	float g = 9.8;
	float max_h = 0;

	while(h >= 0)
	{
		t++;

		h += v;
		v -= g;

		if(h > max_h) max_h = h;
	}


	printf("%f, %d\n", max_h, t);

	return 0;
}
