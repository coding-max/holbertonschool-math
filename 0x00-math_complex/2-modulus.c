#include "holberton.h"

/**
 * modulus - returns the modulus of a given complex number.
 * @c: some complex number.
 * Return: the modulus of @c.
*/
double modulus(complex c)
{
	return (sqrt((c.re * c.re) + (c.im * c.im)));
}
