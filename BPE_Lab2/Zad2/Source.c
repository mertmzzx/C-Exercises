#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Въведете стойност за страната a: ");
	scanf_s("%d", &a);
	printf("Въведете стойност за страната b: ");
	scanf_s("%d", &b);
	printf("Въведете стойност за страната c: ");
	scanf_s("%d", &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b == c)
		{
			printf("Триъгълникът е раwностранен");
		}
		else if (a != b != c)
		{
			printf("Триъгълникът е разнобедрен");
		}
		else if (a == b)
		{
			printf("Триъгълникът е равнобедрен");
		}
	}
	else
	{
		printf("Триъгълникът не е възможен.");
	}

	return 0;
}