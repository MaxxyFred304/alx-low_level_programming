#include "main.h"
include <stdio.h>

/**
*main - program that prints numbers, or fizz or buzz or fizzbuzz
*Return: return 0 for success
*/

int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 3 == 0 && d % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (d % 5 == 0 && d % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (d % 3 == 0 && d % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (d == 1)
		{
			printf("%d", d);
		}
		else
		{
			printf(" %d", d);
		}
	}
	printf("\n");

	return(0);
}
