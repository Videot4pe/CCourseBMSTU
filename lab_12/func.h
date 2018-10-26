#ifndef H_FUNC
#define H_FUNC

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

int cmpfunc (const void * a, const void * b);
void printReverse(int *array, int *arrayEnd);
int findQuantity(FILE *f);
int readArray(int *array, FILE *f);
void binarySort(void * first, size_t quantity, size_t size, int ( * comparator ) ( const void *, const void * ) );
void printArray(int *array, int *arrayEnd);
void filter(int *filterArray, int *filterEnd, int *array);
int findQuantityFilter(int *array, int *arrayEnd);
int findQuantityInArray(int *array, int *arrayEnd);

#endif