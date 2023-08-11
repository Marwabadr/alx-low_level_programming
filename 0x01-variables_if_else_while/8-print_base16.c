#include<stdio.h>
/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; i++)
		putchar(c);
	putchar('\n');
	return (0);
}
