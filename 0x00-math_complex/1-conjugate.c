#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given complex number.
 * @c: some complex number.
 * Return: the conjugate of @c.
*/
complex conjugate(complex c)
{
	complex conj = c;

	conj.im *= -1;
	return (conj);
}
