#include <stdio.h>
#include <math.h>

int isPrime(int num) 
{
    if (num <= 1) 
    {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return 0; 
        }
    }
    return 1;
}
int main()
{
	int num;
	printf("Въведете цяло число: ");
	scanf_s("%d", &num);

	if (isPrime(num))
	{
        printf("Числото е просто");
	}
    else
    {
        printf("Числото не е просто");
    }

    return 0;
}