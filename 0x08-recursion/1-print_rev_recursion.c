#include "main.h"

/**
  * _print_rev_recursion - string in reverse
  *
  * @s: Function parameter
  *
  * Return: Voidu
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
