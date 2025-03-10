#include <stdio.h>

int main() 
{
    int numbers[7];   
    int sum = 0;      
    float average;    

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

        sum += numbers[i]; 
    }

    average = (float)sum / 7;

    printf("Средна стойност: %.3f\n", average);

    return 0;
}
