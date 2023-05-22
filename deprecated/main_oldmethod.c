#include "push_swap.h"

void rank_all(t_node *node, int ranking)
{
	t_node *torank;
	int	ret = -2147483647;

	ret = -2147483647;
	torank = malloc(sizeof(t_node));

	while (node != NULL)
	{
		if (node->number >= ret && node->rank == 0)
		{
			ret = node->number;
			torank = node;
		}
		node = node->next;
	}
	torank->rank = ranking;
}

t_node *start_node(char **array, t_control *cont)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit(1);
	new->number = ft_atoi(array[0]);
	new->rank = 0;
	new->next = NULL;
	new->last = NULL;
	return (new);
}

char	**remove_lower(char **argv, t_control *cont)
{
	int i;
	int i2;

	i = 0;
	i2 = cont->remove;
	if (cont->size == cont->remove)
		return (NULL);
	while (i != cont->remove)
		i++;
	i++;
	while (argv[i])
	{
		argv[i2] = argv[i];
		i++;
		i2++;
	}
	argv[i - 1] = NULL;
	cont->size -= 1;
	return(argv);
}

t_node *add_next_node(t_node *first, char **argv, t_control *cont)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit(1);
	first->next = new;
	new->number = ft_atoi(argv[0]);
	new->rank = 0;
	new->next = NULL;
	new->last = first;
	return (new);
}

int print_every_slot(t_node *first)
{
	char *color;
	int colorer;

	colorer = 0;
	color = ft_strdup("\x1B[31m");
	while (first->next != NULL)
	{
		ft_printf("%sranking = %i | numero = %i\n", color, first->rank, first->number);
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
	ft_printf("%sranking = %i | numero = %i\n", color, first->rank, first->number);
	return (0);
}

void rank_loop(t_node *first, t_node *second, t_control *cont)
{
	int	ranking;

	ranking = cont->size;
	while(second->last != NULL)
		second = second->last;
	while(second->next != NULL)
	{
		rank_all(first, ranking);
		second = second->next;
		ranking--;
	}
	rank_all(first, ranking);
}

int is_sorted(t_node *node)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (node->last != NULL)
		node = node->last;
	// ft_printf("+++++++++++ SORT STATE +++++++++++\n");
	// print_every_slot(node);
	while(node->next != NULL)
	{
		if (node->rank <= node->next->rank)
			i2++;
		node = node->next;
		i++;
	}
	// printf("sequencia = %i | total = %i\n", i2, i);
	if (i2 == i)
		return (1);
	else
		return (0);
}




int	list_ordinance_0_1(t_node *node, t_control *cont)
{
	t_node	*temp;

	temp = malloc(sizeof(t_node));
	temp = node;
	while (temp->last != NULL)
		temp = temp->last;
	if (temp->rank < temp->next->rank)
		return (1);
	else if (temp->rank == cont->size && temp->next->rank == 1)
		return (1);
	else
		return (0);
}

t_node	*simple_swap(t_node *node, t_control *cont)
{
	t_node	*temp;

	static int moves = 0;

	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	while (!is_sorted(node))
	{
		ft_printf("moves = %i\n", moves++);
		if (list_ordinance_0_1(node, cont))
		 	ra(node);
		else
		 	sa(node);
		if (node->next != NULL)
			node = node->next;
		else
			while (node->last != NULL)
				node = node->last;
	}
	while (node->last != NULL)
		node = node->last;
	print_every_slot(node);
	return(node);
}

int main(int argc, char **argv)
{
	t_node	*first;
	t_node	*second;
	t_control	*cont;
	char	**argv_backup;

	cont = malloc(sizeof(t_control));

	cont->size = argc - 1;
	if (argc > 2)
		argv++;
	else
		return (0);
	first = start_node(argv, cont);
	argv++;
	second = add_next_node(first, argv, cont);
	argv++;
	while (argv[0] != NULL)
	{
		second = add_next_node(second, argv, cont);
		argv++;
	}
	rank_loop(first, second, cont);
	tester(first, cont);
	//simple_swap(first, cont);
	//SIMPLE SWAP IS BRUTAL
}