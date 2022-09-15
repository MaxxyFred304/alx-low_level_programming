#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal line
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		putchar('\');
	}
	putchar('\n');
}
