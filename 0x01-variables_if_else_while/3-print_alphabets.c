#include <stdio.h>
/**
 * main - prints alphabet in lowercase, in uppercase, followed by a new line
 *
 * Description: using the main function
 * this program prints 'Alphabet in both lowercase and uppercase'
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
