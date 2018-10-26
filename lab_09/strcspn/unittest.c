#include <stdio.h>
#include <string.h>
#include "func.h"

int main(void)
{
    if (my_strcspn("abcdef", "b") == strcspn("abcdef", "b"))
    {
        printf("Test1 done. \n");
    }
    else
    {
        printf("Test1 error. \n");
    }

    if (my_strcspn("abcdef", "poiu") == strcspn("abcdef", "poiu"))
    {
        printf("Test2 done. \n");
    }
    else
    {
        printf("Test2 error. \n");
    }

    if (my_strcspn("aaaaaa", "aaa") == strcspn("aaaaaa", "aaa"))
    {
        printf("Test3 done. \n");
    }
    else
    {
        printf("Test3 error. \n");
    }

    return 0;
}