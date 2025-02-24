#include <stdio.h>

int main() 
{
    int num;
    printf("Въведете цяло число: ");
    scanf_s("%d", &num);
    
    if (num % 2 == 0) 
    {
        printf("Числото %d е четно.\n", num);
    }
    else 
    {
        printf("Числото %d е нечетно.\n", num);
    }

    if (num > 0) 
    {
        printf("Числото %d е положително.\n", num);
    }
    else if (num < 0) 
    {
        printf("Числото %d е отрицателно.\n", num);
    }
    else 
    {
        printf("Числото е нула.\n");
    }

    if (num % 3 == 0 && num % 5 == 0) 
    {
        printf("Числото %d се дели едновременно на 3 и 5.\n", num);
    }
    else 
    {
        printf("Числото %d не се дели едновременно на 3 и 5.\n", num);
    }

    return 0;
}