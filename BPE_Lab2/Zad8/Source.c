#include <stdio.h>

int main() 
{
    int num, count = 0, sum = 0;
    double average;

    while (1) 
    {
        printf("Въвеждайте число:\n");
        scanf_s("%d", &num);

        if (num == 0) 
        {
            break; 
        }

        sum += num;
        count++;
    }

    if (count > 0) 
    {
        average = (double)sum / count; 
        printf("Брой въведени числа: %d\n", count);
        printf("Сума на числата: %d\n", sum);
        printf("Средноаритметично: %.2f\n", average);
    }
    else {
        printf("Не са въведени числа.\n");
    }

    return 0;
}
