#include <stdio.h>

int countDigits(num)
{
    int count = 0;

    while (num > 0)
    {
        count += 1;
        num /= 10;
    }

    return count;
}

int main()
{
    int num;
    printf("Въведете цяло число: ");
    scanf_s("%d", &num);

    int count = countDigits(num);
    

    printf("%d цифри", count);

    return 0;
}