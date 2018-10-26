#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include "func.h"

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int findQuantityInArray(int *array, int *arrayEnd)
{
	int quantity = 0;
	while (array != arrayEnd)
	{
		array = array + sizeof(int);
		quantity++;
	}
	return quantity;
}
int findQuantityFilter(int *array, int *arrayEnd)
{
	int quantity = findQuantityInArray(array, arrayEnd);
	if (quantity == 0)
		return 0;
	else
	{
		int p = quantity - 1;
		for (int i = 0; i < quantity; i++)
		{
			int *pa = array+i;
			if (*pa < 0)
				p = i+1;
		}
		return p;
	}
}

void printReverse(int *array, int *arrayEnd)
{
	int quantity = findQuantityInArray(array, arrayEnd);
	FILE *of;
	of = fopen("out.txt","w");
	for (int i = quantity-1; i > -1; i--)
	{
		int *pa = array+i;
		fprintf(of, "%d ", *pa);
	}
	fclose(of);
}

void filter(int *filterArray, int *filterEnd, int *array)
{
	int quantity = findQuantityInArray(filterArray, filterEnd);
	for (int i = 0; i < quantity; i++)
	{
		int *pa = array+i;
		int *p = filterArray+i;
		*p = *pa;
	}
}

int findQuantity(FILE *f)
{
	int quantity = 0;
    int number;
    while((fscanf(f, "%d", &number)) == 1)
    {   
        quantity++;
    }
    return quantity;
}

int readArray(int *array, FILE *f)
{
	int number;
    while((fscanf(f, "%d", &number)) == 1)
    {   
    	int *pa = array++;
        *pa = number;
    }     
    return 0;
}

void binarySort(void * first, size_t quantity, size_t size, int ( * comparator ) ( const void *, const void * ) )
{
	int *array = (int *)first;
	int number;
	int leftSide;
	int rightSide;
	int separate;
	for(int i = 1; i < quantity; i++)
	{
		int *pa = array+i-1;
		int *p = array+i;
		if (*pa > *p)
		{
			number = *p;
			leftSide = 0;
			rightSide = i - 1;
			while (leftSide <= rightSide) {
				separate = (leftSide + rightSide)/2;
				int *sep = array+separate;
				if(*sep < number)
				{
					leftSide = separate + 1;
				}
				else 
				{
					rightSide = separate - 1;
				}
			}
			for (int j = i - 1; j >= leftSide; j--)
			{
				int *arrayj = array+j+1;
				int *arrayjd = array+j;
				*arrayj = *arrayjd;
			}
			int *left = array+leftSide;
			*left = number;
		}
	}
	for (int i = 0; i < quantity; i++)
	{
		//int *count = array+i;
		//printf("%d", *count);
	}
}

void printArray(int *array, int *arrayEnd)
{
	int quantity = findQuantityInArray(array, arrayEnd);
	FILE *of;
	of = fopen("out.txt","w");
	for (int i = 0; i < quantity; i ++)
	{
		int *pa = array+i;
		fprintf(of, "%d ", *pa);
	}
	fclose(of);
}
