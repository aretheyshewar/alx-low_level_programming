#include "main.h"
/**
 * add - returns the sum of its parameters
 * @a: int type number
 * @b: int type number
 * Return:0
 */


int add(int a, int b)
{
return (a + b);
}


11-print_to_98.c

Ans:

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
