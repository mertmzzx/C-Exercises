#include <stdio.h>

int main()
{
	int num;
	printf("Въведете цяло число от 1 до 12: ");
	scanf_s("%d", &num);

	if (num < 1 || num > 12)
	{
		printf("Въведеното число не е валидно.");
	}
	else
	{
		if (num == 1)
		{
			printf("Януари(Зима)");
		}
		else if (num == 2)
		{
			printf("Февруари(Зима)");
		}
		else if (num == 3)
		{
			printf("Март(Пролет)");
		}
		else if (num == 4)
		{
			printf("Април(Пролет)");
		}
		else if (num == 5)
		{
			printf("Май(Пролет)");
		}
		else if (num == 6)
		{
			printf("Юни(Лято)");
		}
		else if (num == 7)
		{
			printf("Юли(Зима)");
		}
		else if (num == 8)
		{
			printf("Август(Лято)");
		}
		else if (num == 9)
		{
			printf("Септември(Есен)");
		}
		else if (num == 10)
		{
			printf("Октомври(Есен)");
		}
		else if (num == 11)
		{
			printf("Неомври(Есен)");
		}
		else if (num == 12)
		{
			printf("Декември(Зима)");
		}
	}

	return 0;
}