#include <stdio.h>

char * my_strpbrk(const char * string1, const char * string2)
{

	char* current = (char*) string1;
	char* first = NULL;

	while (*current != '\0')
	{
		char* current2 = (char*) string2;
		while (*current2 != '\0')
		{	
			if (*current == *current2)
			{
				first = current;
				return first;
			}
			current2++;
		}
		current++;
	}
	return first;
}