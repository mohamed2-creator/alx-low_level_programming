#include <stdio.h>
/**
 * main - prints numbers from 0-9 and space between them
 *
 * Description: using the main function
 * this program prints all numbers from 0-9 with commas and spaces
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
