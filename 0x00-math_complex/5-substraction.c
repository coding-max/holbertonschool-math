#include "holberton.h"

/**
 * substraction - performs the substraction operation to complex numbers.
 * @c1: complex to substract.
 * @c2: complex to substract.
 * @c3: complex to save the substraction result.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
