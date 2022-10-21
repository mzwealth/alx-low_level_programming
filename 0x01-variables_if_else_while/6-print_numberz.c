#include <stdio.h>

/**
 * main - Prints all single digits numbers of base 1o starting from 0,
 * 	  only using putchar
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
