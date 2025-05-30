#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Course {
	char name[50];
	char date[11];
	int count;
	float price;
};

void LowerPrice(struct Course* courses, int count, int index) {
	if (index < 0 || index >= count)
	{
		printf("Невалиден индекс!");
		return;
	}

	courses[index].price *= 0.90;

	printf("%.2f лв - %s - %s", courses[index].price, courses[index].name, courses[index].date);
}

int Offer(struct Course* courses, int count, float minPrice, float maxPrice) {
	FILE* textFile = fopen("offer.txt", "w");

	if (textFile == NULL)
	{
		printf("Грешка при създаване/достъпване на текстовия файл.");
		return 1;
	}

	int writtenData = 0;

	for (int i = 0; i < count; i++)
	{
		if (courses[i].price > minPrice && courses[i].price < maxPrice)
		{
			fprintf(textFile, "%s\n%s\n%d лекции\n%.2f лв.");
			writtenData++;
		}
	}
	fclose(textFile);

	return writtenData;
}

struct Course* DeleteCourse(struct Course* courses, int* count, char name, char date) {
	int index = -1;

	for (int i = 0; i < count; i++)
	{
		if (strcmp(courses[i].name, name) == 0 && strcmp(courses[i].date, date) == 0)
		{
			index = i;
			break;
		}
	}

	if (index == -1)
	{
		printf("Не беше намерен такъв курс.");
		return NULL;
	}

	for (int i = index; i < count - 1; i++)
	{
		courses[i] = courses[i + 1];
	}

	(*count)--;

	courses = realloc(courses, (*count) * sizeof(struct Course));

	if (courses == NULL)
	{
		printf("Възникна грешка при оразмеряване на масива.");
		return NULL;
	}

	return courses;
}

int main() {
	FILE* fp = fopen("courses.bin", "rb");

	if (fp == NULL)
	{
		printf("Възникна грешка при отваряне на файла.");
		return 1;
	}

	fseek(fp, 0, SEEK_END);
	int n = ftell(fp) / sizeof(struct Course);
	rewind(fp);

	struct Course* courses = malloc(n * sizeof(struct Course));

	if (courses == NULL)
	{
		printf("Възникна грешка при заделяне на паметта.");
		return 1;
	}

	fread(courses, sizeof(struct Course), n, fp);
	fclose(fp);

	return 0;
}