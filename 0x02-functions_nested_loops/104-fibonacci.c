#include <stdio.h>
#include "main.h"
/**
* main - prints the first  98 fibonacci numbers
*
* Return: 0
*/

void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;

	if (n < 1)
		return;
	printf("%d, ", f1);
	for (i = 1; i < n; i++) {
		printf("%d, ", f2);
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

int main()
{
	printFibonacciNumbers(98);
	return 0;
}
