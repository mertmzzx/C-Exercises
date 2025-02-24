#include <stdio.h>

int main()
{
	int A, B;
	printf("Въведете цяло число: ");
	scanf_s("%d", &A);
	printf("Въведете цяло число: ");
	scanf_s("%d", &B);

	int sum = 0;
	for (int i = A; i <= B; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);

	return 0;
}