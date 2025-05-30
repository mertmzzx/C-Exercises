#include <stdio.h>


void square(int a)
{
	int S = a * a;

	printf("Лицето на квадрата е %d", S);
}

void rectangular(int a, int b)
{
	int S = a * b;

	printf("Лицето на правоъгълника е %2d", S);
}

void triangle(int a, int b)
{
	double S = a * b * 0.5;

	printf("Лицето на правоъгълния триъгълник е %.0f", S);
}

void circle(int r)
{
	double S = 3.14 * r * r;

	printf("Лицето на окръжността е %.1f", S);
}

int main() {
	int n;

	scanf_s("%d", &n);

	if (n == 1)
	{
		int a;

		printf("Въведете страна на квадрат: ");
		scanf_s("%d", &a);

		square(a);
	}
	else if (n == 2)
	{
		int a, b;

		printf("Въведете страната a на правоъгълника: ");
		scanf_s("%d", &a);
		printf("Въведете страната b на правоъгълника: ");
		scanf_s("%d", &b);

		rectangular(a, b);
	}
	else if (n == 3)
	{
		int a, b;

		printf("Въведете катета a на правоъгълния триъгълник: ");
		scanf_s("%d", &a);
		printf("Въведете катета b на правоъгълния триъгълник: ");
		scanf_s("%d", &b);

		triangle(a, b);
	}
	else
	{
		int r;

		printf("Въведете радиуса на Окръжността: ");
		scanf_s("%d", &r);

		circle(r);
	}


}