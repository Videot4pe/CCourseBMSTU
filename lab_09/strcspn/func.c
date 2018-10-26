#include <stdio.h>

int my_strcspn(const char * string1, const char * string2)
{
	int first = 0;
	char* current = (char*) string1;

	while (*current != '\0')
	{
		char* current2 = (char*) string2;
		while (*current2 != '\0')
		{
			if (*current == *current2)
				return first;
			current2++;
		}
		current++;
		first++;
	}
	return first;
}