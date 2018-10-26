#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(int argc, char const *argv[])
{
    const char* search = argv[4];
    const char* replace = argv[6];

    FILE* f = fopen(argv[1], "r");
    FILE* fout = fopen(argv[2], "w");
    my_getline(f, fout, search, replace);

    fclose(f);
    fclose(fout);
    return 0;
}