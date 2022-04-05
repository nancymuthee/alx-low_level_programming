#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: ponter to copied string (success), NULL (Error)
 */
char *_strdup(char *str)
{
char *ptr;
unsigned int x, len;

if (!str)
return (NULL);

for (len = 0; str[len]; len++)
;
ptr = (char *)malloc(len * sizeof(char) +1);

if (!ptr)
return (NULL);

for (x = 0; x <= len; x++)
ptr[x] = str[x];

return (ptr);
}
