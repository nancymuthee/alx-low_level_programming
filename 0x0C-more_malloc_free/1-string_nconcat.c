#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, len1, len2;

if (!s1)
s1 = "";
if (!s2)
s2 = "";

for (len1 = 0; *(s1 + len1); len1++)
;
for (len2 = 0; *(s2 + len2); len2++)
;

if (len2 < n)
n = len2;

ptr = malloc((len1 + n + 1) * sizeof(char));

if (!ptr)
return (NULL);

for (i = 0; i < (len1 + n); i++)
{
if (i < len1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - len1];
}
ptr[i] = '\0';
return (ptr);
}
