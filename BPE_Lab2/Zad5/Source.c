#include <stdio.h>

int isPalindrome(int num) 
{
    int original = num;  
    int reversed = 0;

    while (num > 0) 
    {
        int digit = num % 10;       
        reversed = reversed * 10 + digit; 
        num /= 10;                  
    }

    return original == reversed;
}

int main() 
{
    int num;
    printf("Въведете цяло число: ");
    scanf_s("%d", &num);

    if (isPalindrome(num))
    {
        printf("Числото %d е палиндром.\n", num);
    }
    else 
    {
        printf("Числото %d не е палиндром.\n", num);
    }

    return 0;
}
