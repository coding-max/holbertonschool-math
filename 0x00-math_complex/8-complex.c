#include "holberton.h"

/**
 * complex_from_mod_arg - updates the real and the imaginary parts
 * of a complex number given its modulus and arguments.
 * @m: modulus.
 * @arg: argument.
 * @c3: complex to save the result.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
