#include "holberton.h"

/**
 * argument - returns the argument of a given complex number.
 * @c: the complex
 * Return: the argument of complex
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
