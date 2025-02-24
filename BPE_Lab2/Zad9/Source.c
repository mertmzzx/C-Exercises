#include <stdio.h>

int main()
{
	int N;
	printf("Въведете число: ");
	scanf_s("%d", &N);

	for (int i = 1; i < N; i += i)
	{
		printf("%d,", i);
	}

	return 0;
}