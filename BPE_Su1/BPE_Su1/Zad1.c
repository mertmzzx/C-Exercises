#include <stdio.h>
#include <stdlib.h>


int main()
{
	int r, h;
	scanf_s("%d", &r);
	scanf_s("%d", &h);

	double A = 2 * 3.14 * r * (r + h);
	double V = 3.14 * r * h;

	printf("Лице: %.2f \n", &A);
	printf("Обем: %.2f", &V);
}