#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    char *test = temp;

    int i;

    for (i = 0; dest[i] != '\0';)
    {
        *dest++ = *test++;
    }
    while (*src)
        *dest++ = *src++;
    *dest = '\0';

    return (temp);
}
