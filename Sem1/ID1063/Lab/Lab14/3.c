#include <stdio.h>
#include <stdlib.h>

int main()
{
	int capacity = 4;
	float* arr = malloc(capacity*sizeof(float));

	int k = 0;
	while(1)
	{
		float f;
		scanf("%f", &f);

		if(f == -999)
		{
			break;
		}

		if(k >= capacity)
		{
			capacity *= 2;
			float* tmp = realloc(arr, sizeof(float)*capacity);
			if(tmp == NULL) return 1;

			arr = tmp;
		}

		arr[k++] = f;
	}

	float max = arr[0];
	float min = arr[0];

	for(int i = 0; i < k; i++)
	{
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}

	printf("%d %f %f\n", k, min, max);

	free(arr);


	return 0;
}
