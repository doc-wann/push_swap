#include "push_swap.h"

int print_every_slot_simple(t_node *first, char tack)
{
	char *color;
	int colorer;

	colorer = 0;
	color = ft_strdup("\x1B[31m");
	if (!first)
		return (0);
	while (first->last != NULL)
		first = first->last;
	while (first->next != NULL)
	{
		ft_printf("%sranking = %i | stack %c\n", color, first->rank, tack);
		first = first->next;
		if (colorer == 0)
			color = ft_strdup("\x1B[32m");
		if (colorer == 1)
			color = ft_strdup("\x1B[33m");
		if (colorer == 2)
			color = ft_strdup("\x1B[34m");
		if (colorer == 3)
			color = ft_strdup("\x1B[35m");
		if (colorer == 4)
		{
			colorer = -1;
			color = ft_strdup("\x1B[31m");
		}
		colorer++;
	}
	ft_printf("%sranking = %i | stack %c\n", color, first->rank, tack);
	return (0);
}

int both_stack_print(t_node *a, t_node *b)
{
	printf("%s======= STACK1 =======\n", "\e[0;34m");
	print_every_slot_simple(a, 'a');
	printf("%s======= STACK2 =======\n", "\e[0;34m");
	print_every_slot_simple(b, 'b');
	printf("\n\n\n");
	return (0);
}

void	tester(t_node *a, t_control *cont)
{
	print_every_slot(a);
}