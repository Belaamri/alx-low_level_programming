#include "main.h"
/**
 * postitive_or_negative - checks for positive or negative numbers
 *
 * @i: the number to be checked
 *
 * Return: always 0
 */
void postitive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
