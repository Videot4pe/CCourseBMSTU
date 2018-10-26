#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "func.h"

void generate_list(Node **test1, Node **test2, Node **test3, Node **test4, Node **sort1, Node **sort2);
void test(int test, int result, int number);
void test_sort(Node **sort1, Node **sort2);

int main(void)
{
	Node* test1 = NULL;
    Node* test2 = NULL;
    Node* test3 = NULL;
    Node* test4 = NULL;
    Node* sort1 = NULL;
    Node* sort2 = NULL;

    generate_list(&test1, &test2, &test3, &test4, &sort1, &sort2);

    test((*(int *)pop_back(&test1)), 1, 1);
	test((*(int *)pop_back(&test2)), 1, 2);
	test((*(int *)pop_front(&test3)), 2, 3);
	test((*(int *)pop_front(&test4)), 9, 4);

	sort(&sort1, compare);
	sort(&sort2, compare);
	test_sort(&sort1, &sort2);

    return 0;
}

void generate_list(Node **test1, Node **test2, Node **test3, Node **test4, Node **sort1, Node **sort2)
{
	int test_case1[] = {1, 2, 5, 4};
	int test_case2[] = {1, 8, 5, 4, 4, 7};
	int test_case3[] = {7, 9, 6, 2};
	int test_case4[] = {5, 2, 3, 5, 8, 9};
	int sort_case1[] = {4, 7, 5, 6};
	int sort_case2[] = {6, 8, 4, 3, 8, 9};


	for (int i = 0; i < 4; i++)
    	add(test1, test_case1[i]);
    for (int i = 0; i < 6; i++)
    	add(test2, test_case2[i]);
    for (int i = 0; i < 4; i++)
    	add(test3, test_case3[i]);
    for (int i = 0; i < 6; i++)
    	add(test4, test_case4[i]);
    for (int i = 0; i < 4; i++)
    	add(sort1, sort_case1[i]);
    for (int i = 0; i < 6; i++)
    	add(sort2, sort_case2[i]);

    printf("\n");
}

void test(int test, int result, int number)
{
	if (test == result)
    {
        printf("Test%d done. \n", number);
    }
    else
    {
        printf("Test%d error. \n", number);
    }
}

void test_sort(Node **sort1, Node **sort2)
{
	int test1[] = {4, 5, 6, 7};
	int test2[] = {3, 4, 6, 8, 8, 9};

	int flag = 1;
	for (int i = 0; i < 4; i++)
	{
		if (test1[i] != (*(int *)(*sort1)->data))
		{
			printf("Test5 error. \n");
			flag = 0;
			break;
		}
		*sort1 = (*sort1)->next;
	}
	if (flag)
		printf("Test5 done. \n");

	flag = 1;
	
	for (int i = 0; i < 6; i++)
	{
		if (test2[i] != (*(int *)(*sort2)->data))
		{
			printf("Test6 error. \n");
			flag = 0;
			break;
		}
		*sort2 = (*sort2)->next;
	}
	if (flag)
		printf("Test6 done. \n\n");
}