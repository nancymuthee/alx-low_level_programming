#include <stdio.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
	long num = 612852475143;

		for (c = (int) sqrt(num); c > 2; c++)
				{
							if (num % c == 0)
										{
														printf("%d\n", c);
																	break;
																			}
								}

			return (0);
}
