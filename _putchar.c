#include "main.h"

/**
 * _putchar - writes the char  to school
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned. and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}