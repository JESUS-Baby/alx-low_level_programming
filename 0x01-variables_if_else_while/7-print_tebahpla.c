#include <stdio.h>

/**
 * main - Entry point
 * Return: O (Success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
