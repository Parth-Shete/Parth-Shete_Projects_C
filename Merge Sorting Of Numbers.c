/*Code for Merge Sorting of numbers*/
#include<stdio.h>

int main(void) //Void used so as to get zero return value
{
	int i, j, k, temp, n;
	int arr[100];
	
	printf("How many numbers to be sorted?: \n");
	scanf_s("%d", &n);
	
	printf("Enter %d numbers: \n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) //Condition
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf("Sorted Elements are: \n");
	
	for (i = 0; i < n; i++)
	{
		printf(" %d", arr[i]); //space after %d is to get space in the final program
	}
}