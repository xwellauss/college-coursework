#include <stdio.h>
#include <stdbool.h>

int element_at(int* arr, int size, int a)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == a) return i;
	}
	return -1;
}

int main()
{
	int n;
	scanf("%d", &n);

	int marks[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &marks[i]);
	}

	int keys[n]; // The mark
	int values[n]; // Frequency
	int unique = 0; // Each distinct key

	for(int i = 0; i < n; i++)
	{
		keys[i] = 0;
		values[i] = 0;
	}

	for(int i = 0; i < n; i++)
	{
		if(element_at(keys, unique, marks[i]) == -1)
		{
			keys[unique++] = marks[i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		values[element_at(keys, unique, marks[i])]++;
	}

	int k;
	scanf("%d", &k);

	if(k == 5)
	{
		int reversed[n];
		for(int i = 0; i < n; i++)
		{
			reversed[i] = marks[n-i-1];
		}
		for(int i = 0; i < n; i++)
		{
			marks[i] = reversed[i];
		}
		for(int i = 0; i < n; i++)
		{
			printf("%d\n", marks[i]);
		}
	}
	else if(k == 6)
	{	
		for(int i = 0; i < unique; i++)
		{
			printf("%d %d\n", keys[i], values[i]);
		}
	}
	else if(k == 7)
	{
		bool no_uniques = true;
		for(int i = 0; i < unique; i++)
		{
			if(values[i] <= 1)
			{
				printf("%d", keys[i]);
				if(i != unique-1) printf(" ");

				no_uniques = false;
			}
		}

		if(no_uniques) printf("-1");
		printf("\n");
	}
	else if(k == 8)
	{
		bool no_duplicates = true;
		for(int i = 0; i < unique; i++)
		{
			if(values[i] > 1)
			{
				printf("%d", keys[i]);
				if(i != unique-1) printf(" ");

				no_duplicates = false;
			}
		}

		if(no_duplicates) printf("-1");
		printf("\n");
	}

	return 0;
}
