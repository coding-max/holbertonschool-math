#ifndef SEQUENCE_FIBONACCI
#define SEQUENCE_FIBONACCI

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
	int elt;
	struct cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
