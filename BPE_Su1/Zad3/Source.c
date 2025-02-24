#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf_s("%d", &n);

	printf("%d \n", n % 10);
	n /= 10;
	printf("%d \n", n % 10);
	n /= 10;
	printf("%d \n", n % 10);
	n /= 10;
	printf("%d \n", n % 10);
	n /= 10;
	printf("%d \n", n % 10);
	n /= 10;
}