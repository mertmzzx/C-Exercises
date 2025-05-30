#include <stdio.h>
#include <math.h>

int main()
{
	int points, bonus;

	printf("Въведете брой точки:");
	scanf_s("%d", &points);
	bonus = 0;

	if (points <= 100)
	{
		bonus += 5;
	}
	else if (points > 100 && points < 1000)
	{
		bonus = points * 0.2;
	}
	else
	{
		bonus = points * 0.1;
	}

	if (points % 2 == 0)
	{
		bonus++;
	}
	if (points % 10 == 5)
	{
		bonus += 2;
	}

	printf("%d \n", bonus);
	printf("%d", points + bonus);

	return 0;
}