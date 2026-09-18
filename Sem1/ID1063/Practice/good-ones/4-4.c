#include <stdio.h>
#include <stdbool.h>

int main()
{
	long long int D, H;
	scanf("%lld %lld", &D, &H);

	long long int min_firings = 0;

	while((D > 0) && (H > 0))
	{
		if(D >= 2*H)
		{
			H *= 2;
			min_firings++;
		}
		else if(H >= 2*D)
		{
			D *= 2;
			min_firings++;
		}
		else if(D >= 1 && H >= 1)
		{
			D--;
			H--;
			min_firings++;
		}
	}

	if(!min_firings)
		printf("-1\n");
	else
		printf("%lld\n", min_firings);

	return 0;
}
