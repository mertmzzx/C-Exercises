#include <stdio.h>
#include <string.h>

struct Person {
	char name[50];
	int age;
};


void WriteFile(FILE* fp) {
	if (fp == NULL)
	{
		printf("Грешка при създаване на файл.\n");
		return 1;
	}

	struct Person p1;
	struct Person p2;

	strcpy(p1.name, "Иван");
	p1.age = 25;

	strcpy(p2.name, "Мария");
	p2.age = 30;

	fwrite(&p1, sizeof(struct Person), 1, fp);
	fwrite(&p2, sizeof(struct Person), 1, fp);

	printf("Данните бяха записани успешно!");
}

void ReadFromFile(FILE* fp)
{
	if (fp == NULL)
	{
		printf("Грешка при отваряне на файл.\n");
		return 1;
	}

	struct Person people[5];
	int count = 0;

	while (fread(&people[count], sizeof(struct Person), 1, fp) == 1)
	{
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		printf("Име: %s, Възраст: %d\n", people[i].name, people[i].age);
	}
}

int main() {
	FILE* fp = fopen("people.bin", "rb"); // Change to "wb" for WriteFile()

	//WriteFile(fp);
	ReadFromFile(fp);

	fclose(fp);

	return 0;
}