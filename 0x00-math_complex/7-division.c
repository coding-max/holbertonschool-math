#include "holberton.h"

/**
 * division - performs the division operation to complex numbers.
 * @c1: complex to divide.
 * @c2: complex to divide.
 * @c3: complex to save the division result.
 */
void division(complex c1, complex c2, complex *c3)
{
	double divisor = ((c2.re * c2.re) + (c2.im * c2.im));

	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / divisor;
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / divisor;
}
