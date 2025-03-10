#include <stdio.h>

int main() 
{
    int numbers[7]; 
    int max;       

    printf("Въведете 7 цели числа от интервала [-5000..5000]:\n");

    for (int i = 0; i < 7; i++) 
    {
        while (1) 
        { 
            scanf_s("%d", &numbers[i]);

            if (numbers[i] >= -5000 && numbers[i] <= 5000) 
            {
                break;
            }

            printf("Грешка! Числото трябва да е в диапазона [-5000..5000]. Въведете отново: ");
        }
    }

    max = numbers[0];
    for (int i = 1; i < 7; i++) 
    {
        if (numbers[i] > max) 
        {
            max = numbers[i];
        }
    }

    printf("Най-голямото число: %d\n", max);

    return 0;
}
