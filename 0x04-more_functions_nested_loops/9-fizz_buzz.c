#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/
int main(void)
{
	for (int n = 1; n < 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz\n");
		else if (n % 3 == 0)
			printf("Fizz\n");
		else if (n % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", n);
	}
	return (0);
}
