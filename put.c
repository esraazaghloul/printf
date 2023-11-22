#include "main.h"

/**
 * _putchar - writes character
 * @c: the charcter printed
 *
 * Return: on success equals 1
 * on error equals -1
 */

int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BIF_SIZE];

	if (c == BIF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
