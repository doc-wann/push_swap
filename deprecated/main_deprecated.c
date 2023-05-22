#include "./libft/libft.h"
#include "./printf/ft_printf.h"

#include <stdio.h>

int get_min_erase(char **array, t_control *cont)
{
	int i;
	int i2;
	int ret;

	i = 0;
	ret = ft_atoi(array[i]);
	while (array[i])
	{
		if (ret >= ft_atoi(array[i]))
		{
			i2 = i;
			ret = ft_atoi(array[i]);
		}
		i++;
	}
	cont->remove = i2;
	return(ret);
}

t_node *start_node(char **array, t_control *cont)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit(1);
	new->number = get_min_erase(array, cont);
	new->rank = 1;
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
	static int ranking = 2;
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit(1);
	first->next = new;
	new->number = get_min_erase(argv, cont);
	new->rank = ranking;
	new->next = NULL;
	new->last = first;
	ranking++;
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
		ft_printf("%snúmero = %i | ranking = %i\n", color, first->number, first->rank);
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
	ft_printf("%snúmero = %i | ranking = %i\n", color, first->number, first->rank);
	return (0);
}

int main(int argc, char **argv)
{
	t_node	*first;
	t_node	*second;
	t_control	*cont;
	char	**argv_backup;

	argv_backup = ft_strdup_multiple(argv);

	cont = malloc(sizeof(t_control));

	cont->size = argc - 1;
	if (argc > 2)
		argv++;
	else
		return (0);
	first = start_node(argv, cont);
	argv = remove_lower(argv, cont);
	second = add_next_node(first, argv, cont);
	argv = remove_lower(argv, cont);
	while (argv[0] != NULL)
	{
		second = add_next_node(second, argv, cont);
		argv = remove_lower(argv, cont);
	}
	return(print_every_slot(first));
	// ft_sort_first(first, argv_backup);
}