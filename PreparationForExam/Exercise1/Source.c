#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Medicine {
	char name[30];
	char date[8];
	long long code;
	float price;
	int quantity;
};

struct Medicine* GetExpiredMedicines(struct Medicine* medicines, int count, char* date)
{
	int expiredCount = 0;
	struct Medicine* expiredMedicines = malloc(count * sizeof(struct Medicine));

	if (expiredMedicines == NULL)
	{
		printf("Възникна грешка при заделяне на паметта на изтеклите лекаства.");
		return 1;
	}

	int month, year, currMonth, currYear;

	sscanf(date, "%d.%d", &month, &year);

	for (int i = 0; i < count; i++)
	{
		sscanf(medicines[i].date, "%d.%d", &currMonth, &currYear);

		if (currYear < year || month > currMonth && year == currYear)
		{
			expiredMedicines[expiredCount] = medicines[i];
			expiredCount++;
		}
	}

	if (expiredCount == 0)
	{
		return NULL;
	}

	expiredMedicines = realloc(expiredMedicines, expiredCount * sizeof(struct Medicine));

	return expiredMedicines;
}

int Offer(struct Medicine* medicines, int count, float minPrice, float maxPrice)
{
	FILE* textFile = fopen("offer,txt", "w");
	int writtenData = 0;

	if (textFile == NULL)
	{
		printf("Грешка при създаване на текстов файл.");
		return 1;
	}

	for (int i = 0; i < count; i++)
	{
		float currPrice = medicines[i].price;

		if (currPrice > minPrice && currPrice < maxPrice)
		{
			fprintf(textFile, "%s\n%s\n%d\n%.2f", medicines[i].name, medicines[i].date, medicines[i].code, currPrice);
			writtenData++;
		}
	}

	fclose(textFile);
	return writtenData;
}

void DeleteMedicine(struct Medicine* medicines, int count, char* name, char* date)
{
	for (int i = 0; i < count; i++)
	{
		if (strcmp(medicines[i].name, name) == 0 && strcmp(medicines[i].date, date) == 0)
		{
			for (int j = i; j < count - 1; j++)
			{
				medicines[j] = medicines[j + 1];
			}

			count--;

			medicines = realloc(medicines, count * sizeof(struct Medicine));
		}
	}
}

int main() 
{
	FILE* fp = fopen("medicines.bin", "rb");

	if (fp == NULL)
	{
		printf("Възникна грешка при отваря на файла.");
		return 1;
	}

	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	rewind(fp);

	int count = size / sizeof(struct Medicine);


	struct Medicine* medicines = malloc(count * sizeof(struct Medicine));
	if (medicines == NULL)
	{
		printf("Възникна грешка при заделяне на паметта.");
		return 1;
	}

	fread(&medicines, sizeof(struct Medicine), count, fp);
	fclose(fp);

}