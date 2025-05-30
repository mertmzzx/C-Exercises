#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;

	printf("Въведете число: ");
	scanf_s("%d", &a);

	printf("Въведете число: ");
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("По-голямото число е %d", a);
	}
	else
	{
		printf("По-голямото число е %d", b);
	}

	return 0;
}