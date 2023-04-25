#include "holberton.h"
/**
 * _puts - prints a string
 *
 * @str: pointer to the string to print
 *
 * Return: null
*/

void _puts(char *str)
{
int j = 0;
while (str[j])
{
	_putchar(str[j]);
	j++;
}
}
