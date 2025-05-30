#include <stdio.h>
#include <math.h>

int main()
{
	int km;
	char time;

	printf("Въведете разстояние в километри:");
	scanf_s("%d", &km);

	printf("Въведете период от деня(D/N):");
	scanf_s("%d", &time);

	float taxi, bus, train;

	if (time == "D")
	{
		taxi = 0.70 + (0.79 * km);
	}
	else if (time == "N")
	{
		taxi = 0.70 + (0.90 * km);
	}

	if (km >= 20)
	{
		bus = 0.09 * km;
	}

	if (km >= 100)
	{
		train = 0.06 * km;
	}

	if (bus != 0 && train != 0)
	{
		if (taxi < bus && taxi < train)
		{
			printf("Най-евтиният транспорт е с такси и ще струва %d лв.", taxi);
		}
		else if (bus < taxi && bus < train)
		{
			printf("Най-евтиният транспорт е с автобус и ще струва %d лв.", bus);
		}
		else if (train < taxi && train < bus)
		{
			printf("Най-евтиният транспорт е с влак и ще струва %d лв.", train);
		}
	}
	else if (bus != 0)
	{
		if (taxi < bus && taxi < train)
		{
			printf("Най-евтиният транспорт е с такси и ще струва %d лв.", taxi);
		}
		else if (bus < taxi && bus < train)
		{
			printf("Най-евтиният транспорт е с автобус и ще струва %d лв.", bus);
		}
	}
	else
	{
		printf("Единственият възможен транспорт е с такси и ще струва %d лв.", taxi);
	}

	return 0;
}