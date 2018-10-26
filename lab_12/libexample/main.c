#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include "func.h"

int main(int argc, char * argv[])
{
	if (argc < 1)
	{
		printf("ERROR");
		getch();
   		return 1;
	}
	else
	{
		printf("\n\n");
		int quantity1 = atoi(argv[1]);
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
		return 0;
	}
}