#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char big;

	for (big = 'a'; big <= 'z'; big++)
		putchar(big);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(big);
	putchar('\n');

	return (0);
}
