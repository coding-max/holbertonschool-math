#include "heron.h"

/**
 * new_cell - create a cell and initialize it with the given values.
 * @elt: approximation to the root.
 * @next: pointer to next node.
 * Return: pointer to the created cell (node).
 */
t_cell *new_cell(double elt, t_cell *next)
{
	t_cell *cell;

	cell = malloc(sizeof(t_cell));
	cell->elt = elt;
	cell->next = next;
	return (cell);
}

/**
 * heron - calculates the Heron sequence,
 * until having convergence with an error less or equal to 10^(-7).
 * @p: number to approximate its root.
 * @x0: first approximation to the root to look for.
 * Return: the Heron sequence.
 */
t_cell *heron(double p, double x0)
{
	double x;
	t_cell *head;

	head = new_cell(x0, NULL);
	x = 0.5 * (x0 + (p / x0));
	while ((fabs(x - x0)) > pow(10, -7))
	{
		x0 = x;
		x = 0.5 * (x + (p / x));
		head = new_cell(x0, head);
	}
	return (head);
}
