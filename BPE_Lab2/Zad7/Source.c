#include <stdio.h>

int main() 
{
    int N; 
    printf("Въведете цяло число: ");
    scanf_s("%d", &N);

    int biggestDigit = 0;
    while (N > 0) {
        int digit = N % 10;
        if (digit > biggestDigit)
        {
            biggestDigit = digit;
        }
        N /= 10;
    }

    printf("Най голямата цифра е %d", biggestDigit);

    return 0;
}