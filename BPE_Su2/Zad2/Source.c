#include <stdio.h>
#include <math.h>

int main()
{
	int hours, minutes;

	printf("Въведете час:");
	scanf_s("%d", &hours);

	printf("Въведете минути: ");
	scanf_s("%d", &minutes);

	if ((minutes + 15) > 60)
	{
		minutes = (minutes + 15) - 60;
		hours++;
	}
	else
	{
		minutes += 15;
	}

	if (minutes < 10)
	{
		printf("%d:0%d", hours, minutes);
	}
	

	return 0;

}