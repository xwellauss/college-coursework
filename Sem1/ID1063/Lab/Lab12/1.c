#include <stdio.h>

typedef struct
{
	int day;
	int month;
	int year;
} Date;

int days_encode(int day, int month)
{
	int days = 0;

	if(month > 2)
	{
		days -= 2;
	}

	days += (month - 1)/2 * 61;
	days += (month - 1) % 2 * 31;

	if(month > 7 && month % 2 != 0)
	{
		days += 1;
	}


	days += day;

	return days;
}

void tommorrow(Date* date)
{


}

int main()
{

	return 0;
}
