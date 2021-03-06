#include "holberton.h"

/**
 * display_complex_number - displays a complex numbers
 * @c: complex umber to display.
 */
void display_complex_number(complex c)
{

/* print the real part */
if (c.re)
	printf("%.9g", c.re);

/* print the imaginary part */
if (c.im > 0)
{
	if (c.re)
		printf(" + ");
	if (c.im != 1)
		printf("%.9gi\n", c.im);
	else
		printf("i\n");
}
else if (c.im < 0)
{
	if (c.re)
		printf(" - ");
	if (c.im != -1)
		printf("%.9gi\n", c.im * (-1));
	else
		printf("i\n");
}
else if (c.re)
	printf("\n");
else
	printf("0\n");
}
