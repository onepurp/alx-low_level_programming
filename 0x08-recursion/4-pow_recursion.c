#include "main.h"

/**
 * _pow_recursion- @
 * @x: #
 * @y: #
 * Return: -1 if x, y < 0 & 1 if x == 0 & x ^ y if x > 0
 */

int _pow_recursion(int x, int y)
{
	if (x < 0 && y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (1);
	}
	else
	{
		return (x ^ y);
	}
}
