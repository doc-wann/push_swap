/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:48:45 by hdaniele          #+#    #+#             */
/*   Updated: 2023/06/29 18:50:09 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_free(t_node *list)
{
	if (list)
	{
		ft_free(list->next);
		free(list);
	}
}

void	checkers(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (check_n(argv[i]) == 0)
			exit(0);
		if (check_max_min(argv[i]) == 0)
			exit(0);
		i++;
	}
}

size_t	push_strlen(t_node *p)
{
	int	i;

	i = 0;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}

void	execution(t_node **stack_a, t_node **stack_b, int argc)
{
	if (push_strlen(*stack_a) <= 3 && push_strlen(*stack_a) > 1)
		order_three(stack_a);
	else if (push_strlen(*stack_a) == 4)
		order_four(stack_a, stack_b);
	else if (push_strlen(*stack_a) == 5)
		order_five(stack_a, stack_b);
	else
		radix(stack_a, stack_b, argc - 1);
}

int	main(int argc, char **argv)
{
	t_node	*stacka;
	t_node	*stackb;
	int		i;

	i = 0;
	argv++;
	stacka = NULL;
	stackb = NULL;
	if (argc < 2)
		return (0);
	checkers(argv);
	while (argv[i])
	{
		put_last(&stacka, create_list(argv[i]));
		i++;
	}
	if (check_error(&stacka) == 0)
	{
		ft_free(stacka);
		return (0);
	}
	execution(&stacka, &stackb, argc);
	ft_free(stacka);
	ft_free(stackb);
	return (0);
}
