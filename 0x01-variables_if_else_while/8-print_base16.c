#include <stdio.h>
/**
 * main - Entry level
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = '0';

	while
		(d <= '9') {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
