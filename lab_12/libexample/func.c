#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "func.h"

void start(int size)
{
	printf("\n\n");
	int quantity1 = size;
	int *array1 = (int*)malloc(quantity1 * sizeof(int));
	int *array2 = (int*)malloc(quantity1 * sizeof(int));
	fibonacciNumbers(array1, quantity1);
	int quantity2 = firstElement(array1, array2, quantity1);
	printArray(array1, quantity1);
	printf("\n");
	printArray(array2, quantity2);
	free(array1);
	free(array2);
	printf("\n\n");
}

void fibonacciNumbers(int *array, int quantity)
{
	array[0] = 0;
	array[1] = 1;
	for (int i = 2; i < quantity; i++) 
		array[i] = array[i-2] + array[i-1];
}

int firstElement(int *array1, int *array2, int quantity1)
{
	int quantity2 = 0;
	for (int i = 0; i < quantity1; i++)
	{
		int number = array1[i];
		int flag = 0;
		for (int j = 0; j < quantity2; j++)
		{
			if (number == array2[j])
				flag = 1;
		}
		if (flag == 0)
		{
			array2[quantity2] = number;
			quantity2++;
		}
	}
	int *finalArray = (int*)malloc(quantity2 * sizeof(int));
    for (int i = 0; i < quantity2; i++)
        finalArray[i] = array2[i];
    free(array2);
    array2 = (int*)malloc(quantity2 * sizeof(int));
    for (int i = 0; i < quantity2; i++)
        array2[i] = finalArray[i];
    free(finalArray);
    return quantity2;
}

void printArray(int *array, int quantity)
{
	for (int i = 0; i < quantity; i++)
		printf("%d ", array[i]);
}