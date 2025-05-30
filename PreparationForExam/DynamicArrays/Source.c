#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Колко елемента искаш да въведеш? ");
    scanf_s("%d", &n);

    // 1. Заделяне на памет с calloc (всички стойности са 0)
    int* arr = calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Грешка при заделяне на памет!\n");
        return 1;
    }

    // 2. Въвеждане на числата
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }

    // 3. Предлагаме разширяване
    char choice;
    printf("Искаш ли да добавиш още елементи? (y/n): ");
    scanf_s(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        int extra;
        printf("Колко допълнителни елемента? ");
        scanf_s("%d", &extra);

        // 4. Увеличаване на масива с realloc
        arr = realloc(arr, (n + extra) * sizeof(int));
        if (arr == NULL) {
            printf("Грешка при пре-задаване на памет!\n");
            return 1;
        }

        // 5. Въвеждане на новите елементи
        for (int i = n; i < n + extra; i++) {
            printf("arr[%d] = ", i);
            scanf_s("%d", &arr[i]);
        }

        n += extra;  // новият общ размер
    }

    // 6. Принтиране на всички елементи
    printf("\nМасивът съдържа: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 7. Сумиране
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\nСумата на елементите е: %d\n", sum);

    // 8. Освобождаване на паметта
    free(arr);
    return 0;
}
