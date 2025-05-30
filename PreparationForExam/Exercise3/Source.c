#include <stdio.h>
#include <stdlib.h>

struct IceCream {
	char code[3];
	char name[21];
	int weight;
	float price;
};

int main()
{
	int n;
	scanf("Въведете брой сладоледи: %d", n);

	if (n <= 5 || n >= 15)
	{
		printf("Невалиден брой!");
		return 1;
	}

	struct IceCream* icecreams = malloc(n * sizeof(struct IceCream));

	for (int i = 0; i < n; i++)
	{
		sscanf("Въведете уникален код, име, тегло и цена на килограм на сладоледа: %s %s %d %f", 
			icecreams[i].code,
			icecreams[i].name,
			icecreams[i].weight,
			icecreams[i].price);
	}

	if (icecreams == NULL)
	{
		printf("Паметта не беше успешно заделена!");
		return 1;
	}
}