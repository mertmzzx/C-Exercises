#include <stdio.h>
#include <math.h>


int main()
{
	int first, second, third;

	printf("Въведете времена на първия състезател:");
	scanf_s("%d", &first);

	printf("Въведете времена на втория състезател:");
	scanf_s("%d", &second);

	printf("Въведете времена на третия състезател:");
	scanf_s("%d", &third);

	int minutes = 0;
	int seconds = 0;


	if (first + second >= 60)
	{
		seconds = (first + second) - 60;
		minutes++;
	}
	else
	{
		seconds = first + second;
	}

	if (seconds + third >= 60)
	{
		seconds = (seconds + third) - 60;
		minutes++;
	}
	else
	{
		seconds += third;
	}

	if (seconds < 10)
	{
		printf("%d:0%d", minutes, seconds);
	}
	else
	{
		printf("%d:%d", minutes, seconds);
	}

	return 0;
}