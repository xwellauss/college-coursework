#include <stdio.h>

// Looping lowercase ascii characters

int main()
{
	char c;
	scanf("%c", &c);

	int n;
	scanf("%d", &n);

	c = c - 97 + 1;

	int x = (c+n) % 26;
	x = x < 0 ? x + 26 : x;

	c = x + 97 - 1;	

	printf("%c\n", c);
// 97 - 122
}
