#ifndef SEQUENCE_HERON
#define SEQUENCE_HERON

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct cell - list to represent a sequence.
 * @elt: double.
 * @next: pointer to next cell (node).
 */
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
