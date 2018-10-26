#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include "func.h"
#include "error.h"

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		printf("ERROR");
   		return 1;
	}
	else
	{
		FILE *f;
	    f = fopen(argv[1],"r");
	    mainFunction(f, &argv[2]);
	}    
    //getch();
    return 0;
}

