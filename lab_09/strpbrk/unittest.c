#include <stdio.h>
#include <string.h>
#include "func.h"

int main(void)
{
    if (my_strpbrk("abcdef", "b") == strpbrk("abcdef", "b"))
    {
        printf("Test1 done. \n");
    }
    else
    {
        printf("Test1 error. \n");
    }

    if (my_strpbrk("abcdef", "poiu") == strpbrk("abcdef", "poiu"))
    {
        printf("Test2 done. \n");
    }
    else
    {
        printf("Test2 error. \n");
    }

    if (my_strpbrk("aaaaaa", "aaa") == strpbrk("aaaaaa", "aaa"))
    {
        printf("Test3 done. \n");
    }
    else
    {
        printf("Test3 error. \n");
    }

    return 0;
}