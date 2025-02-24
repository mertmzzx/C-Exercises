#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, sum = 0;
	scanf_s("%d", &n);

	sum = sum + (n % 10);
	n = n / 10;
	sum = sum + (n % 10);
	n = n / 10;
	sum = sum + (n % 10);

	printf("%d", sum);
	return 0;
}