#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character C to stdout
 * 0C: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned,and errno is set appropriately.
 */
int _putchar(char C)
{
	return (write (1, &c, 1));
}	
