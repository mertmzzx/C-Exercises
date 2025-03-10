#include <stdio.h>

void calculate(int* a, int* b, int* sum, int* diff, int* prod, float* quot) 
{
    *sum = *a + *b;    
    *diff = *a - *b;   
    *prod = *a * *b;   

    if (*b != 0) 
    {
        *quot = (float)(*a) / *b; 
    }
    else 
    {
        *quot = 0; 
    }
}

int main() 
{
    int num1, num2, sum, diff, prod;
    float quot;

    printf("Въведете две числа: ");
    scanf_s("%d %d", &num1, &num2);

    calculate(&num1, &num2, &sum, &diff, &prod, &quot);

    printf("Сума: %d\n", sum);
    printf("Разлика: %d\n", diff);
    printf("Произведение: %d\n", prod);

    if (num2 != 0) 
    {
        printf("Деление: %.2f\n", quot);
    }
    else 
    {
        printf("Деление:Грешка! Деление на нула.\n");
    }

    return 0;
}
