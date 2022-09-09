#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Description: using the main function
 * this program 'prints lowercase alphabets in reverse'
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
