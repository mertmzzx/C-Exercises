#include <stdio.h>

int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int main()
{
    int num;
    printf("Въведете цяло число: ");
    scanf_s("%d", &num);

    printf("Сумата на цифрите на числото е %d", sumDigits(num));

    return 0;
}
