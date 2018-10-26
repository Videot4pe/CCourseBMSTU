#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(const char* source)
{
    int len;
    for (len = 0; source[len] != 0; len++){};
    return len;
}

char* my_replace(const char *source, const char *search, const char *replace)
{
    int k = 0;
    int l = 0;

    int source_len = my_strlen(source);
    int search_len = my_strlen(search);
    int replace_len = my_strlen(replace);

    char* result = malloc((source_len / search_len * replace_len + 1) * sizeof(char));

    while (source[k] != '\0')
    {
        int flag = 1;

        for (int i = 0; search[i] != 0; i++)
        {
            if (search[i] != source[k + i])
                flag = 0;
        }

        if (flag == 1)
        {
            for (int i = 0; replace[i] != 0; i++)
            {
                result[l] = replace[i];
                l++;
            }
            k += search_len;
        }
        else
        {
            result[l] = source[k];
            k++;
            l++;
        }
    }
    result[l] = 0;
    return result;
}

void my_getline(FILE *f, FILE *fout, const char *search, const char *replace)
{
    char buffer[256];
    char* result;
    while (!feof(f))
    {
        fgets(buffer, 256, f);
        result = my_replace(buffer, search, replace);
        fprintf(fout, "%s", result);
        free(result);
    }
}