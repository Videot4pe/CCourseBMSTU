#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include "func.h"
#include <time.h>

#define N 3

unsigned long tick(void)
{
  unsigned long d;
  __asm__ __volatile__ ("rdtsc" : "=A" (d) );
  return d;
}

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		printf("ERROR");
		getch();
   		return 1;
	}
    FILE *f;
    f = fopen(argv[1],"r");
    int quantity = findQuantity(f);
    int *array;
	array = (int*)malloc(quantity * sizeof(int));
	int *arrayEnd = array + quantity*(sizeof(int));
    rewind(f);
	readArray(array, f);
    fclose(f);

    unsigned long tb1, te1;

    if (argc > 3)
    {
		if (strcmp(argv[3], "2") == 0)
		{
			tb1 = tick();
      		qsort(array, quantity, sizeof(int), cmpfunc);
      		te1 = tick();
     		printf("\ntime = %lu\n", ((te1 - tb1) / N));
			printArray(array, arrayEnd);
		}
		else
		{
			int quantityFilter = findQuantityFilter(array, arrayEnd);
			int *filterArray;
			filterArray = (int*)malloc(quantityFilter * sizeof(int));
			int *filterEnd = filterArray + quantityFilter*sizeof(int);

			filter(filterArray, filterEnd, array);
			binarySort(filterArray, quantityFilter, sizeof(int), cmpfunc); 
			if (strcmp(argv[2], "0") == 0)
				printArray(filterArray, filterEnd);
			else
				printReverse(filterArray, filterEnd);
			free(filterArray);
		}
    }
    else
    {
    	tb1 = tick();
		binarySort(array, quantity, sizeof(int), cmpfunc); 
      	te1 = tick();
     	printf("\ntime = %lu\n", ((te1 - tb1) / N));
		if (strcmp(argv[2], "0") == 0)
			printArray(array, arrayEnd);
		else
			printReverse(array, arrayEnd);
	}
	free(array);
    return 0;
}