#include <stdio.h>
#include <string.h>

struct Person {
	char name[50];
	int age;
};

void ReadFromFile(FILE* fp)
{
	if (fp == NULL)
	{
		printf("Не може да се отвори файла.\n");
		return;
	}

	struct Person people[5];
	int count = 0;
	char line[100]; // Corrected the type and size of 'line'

	while (fgets(line, sizeof(line), fp) != NULL && count < 5)
	{
		char name[50];
		int age;

		if (sscanf(line, "Име: %[^,], Възраст: %d", name, &age) == 2) // Added '&' for 'age'
		{
			strcpy(people[count].name, name);
			people[count].age = age;
			count++;
		}
	}

	printf("Прочетени хора от файла:\n");
	for (int i = 0; i < count; i++)
	{
		printf("Име: %s, Възраст: %d\n", people[i].name, people[i].age); // Added '\n' for proper formatting
	}
}

void WriteFile(FILE* fp)
{
	if (fp == NULL)
	{
		printf("Грешка при създаване на файл.\n");
		return 1;
	}

	fprintf(fp, "Име: Иван, Възраст: 25\n");
	fprintf(fp, "Име: Мария, Възраст: 30\n");
	fprintf(fp, "Име: Георги, Възраст: 22\n");

	printf("Данните бяха записани успешно!");
}

int main() {
	FILE* fp;
	fp = fopen("people.txt", "r"); // change to "w" for WriteFile()
	//WriteFile(fp);
	ReadFromFile(fp);
	fclose(fp);
}

