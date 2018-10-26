#include <stdio.h>
#include <string.h>
#include "func.h"

int main(void)
{
    char* result;

    result = my_replace("aa aa\n aa", "aa", "bbb");
    if (!strcmp(result, "bbb bbb\n bbb"))
    {
        printf("Test1 done. \n");
    }
    else
    {
        printf("Test1 error. \n");
    }

    result = my_replace("aa aa\n a a", "aa", "bbb");
    if (!strcmp(result, "bbb bbb\n a a"))
    {
        printf("Test2 done. \n");
    }
    else
    {
        printf("Test2 error. \n");
    }

    result = my_replace("bb bbb ba\n a", "bbb", "aa");
    if (!strcmp(result, "bb aa ba\n a"))
    {
        printf("Test3 done. \n");
    }
    else
    {
        printf("Test3 error. \n");
    }

    return 0;
}