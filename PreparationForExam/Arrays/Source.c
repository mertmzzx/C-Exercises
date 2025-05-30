#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
	for (int i = 0; i < n - 1; i++)
	{ 
		for (int j = 0; j < n - i - 1; j++)
		{ 
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int sumDigits(int* arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}

	return sum;
}

int main() {
	int arr[7];
	int* ptr = arr;

	for (int i = 0; i < 7; i++)
	{
		int num;
		scanf_s("%d", &num);

		if (num >-5000 && num < 5000)
		{
			arr[i] = num;
		}
	}

	int sum = sumDigits(ptr, 7);
	bubbleSort(arr, 7);

	printf("Масивът в сортиран вид: ");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nСумата на числата му е: %d", sum);
}