#include <stdio.h>

int main() 
{
    int num1 = 5, num2 = 10; 
    int* ptr1 = &num1, * ptr2 = &num2; 

    printf("Преди размяната: num1 = %d, num2 = %d\n", num1, num2);

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    printf("След размяната: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
