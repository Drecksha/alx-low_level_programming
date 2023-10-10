#include <stdio.h>
/**
 * main - entry point
 * Description: 'print number of base 10 using putchar'
 *Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
		return (0);
}
