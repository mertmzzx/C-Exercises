#include <stdio.h>
#include <stdlib.h>

int main()
{
	int seconds;
	scanf_s("%d", &seconds);

	double minutes = (seconds % 3600) / 60;
	double hours = seconds / 3600;

	seconds = seconds % 60;

	printf("%d час %d минути %d секунда", hours, minutes, seconds);

	return 0;
}