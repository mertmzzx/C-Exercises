#include <stdio.h>

int nod(int a, int b)
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int a, b;

    printf("Въведете две числа: ");
    scanf("%d %d", &a, &b);

    printf("НОД на %d и %d е: %d\n", a, b, nod(a, b));

    return 0;
}
