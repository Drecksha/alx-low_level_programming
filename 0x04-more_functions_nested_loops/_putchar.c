#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charavter c to stdout
 * @c The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and erno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
