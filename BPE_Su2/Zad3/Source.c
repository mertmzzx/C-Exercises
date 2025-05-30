#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	printf("Въведете цяло число:");
	scanf_s("%d", &a);

	printf("Въведете цяло число:");
	scanf_s("%d", &b);

	printf("Въведете цяло число:");
	scanf_s("%d", &c);

	if (a == b == c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}