#include <stdio.h>

void decimalToBinary(int num) 
{
    if (num > 1) 
    {
        decimalToBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() 
{
    int num;

    printf("Въведете десетично число: ");
    scanf_s("%d", &num);

    printf("Двоичната му форма: ");
    decimalToBinary(num);
    printf("\n");

    return 0;
}
