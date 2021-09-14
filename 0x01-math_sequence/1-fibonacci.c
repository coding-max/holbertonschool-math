#include "fibonacci.h"

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
 * gold_number - idk
 * @head: idk
 * Return: idk
 */
double gold_number(t_cell *head)
{
    t_cell *aux = head;

    if (!head || !(head->next))
        return (-1);
    
    aux = head;
    while (aux->next->next == NULL)
        aux = aux->next;

    return ((double)aux->next->elt / (double)aux->elt);
}

/**
 * Fibonnaci - calculates the Fibonnaci sequence
 * Return: idk
 */
t_cell *Fibonnaci()
{
    t_cell *head = NULL;
    int i;
    int n_2 = 1;
    int n_1 = 1;
    int n =  n_2 + n_1;

    head = new_cell(n_2, head);
    head = new_cell(n_1, head);
    head = new_cell(n, head);

    for (i = 3; i < 20; i++)
    {
        n_2 = n_1;
        n_1 = n;
        n = n + n_2;
        head = new_cell(n, head);
    }

    return head;
}
