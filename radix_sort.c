/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:49:08 by hdaniele          #+#    #+#             */
/*   Updated: 2023/06/27 15:49:09 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_binary(int max)
{
	int	i;

	i = 0;
	while (1)
	{
		if (!(max >> i))
			break ;
		i++;
	}
	return (i);
}

t_node	*new_index(t_node **a)
{
	int		i;
	t_node	*aux;
	t_node	*aux_index;
	t_node	*list_radix;

	aux = *a;
	list_radix = NULL;
	while (aux != NULL)
	{
		i = 0;
		aux_index = *a;
		while (aux_index != NULL)
		{
			if (aux->value > aux_index->value)
				i++;
			aux_index = aux_index->next;
		}
		put_last(&list_radix, create_list2(i));
		aux = aux->next;
	}
	return (list_radix);
}

void	radix(t_node **a, t_node **b, int max_index)
{
	int		i;
	int		value;
	int		max_binary;
	t_node	*list_radix;

	list_radix = new_index(a);
	max_binary = size_binary(position_max(&list_radix, 0));
	i = 0;
	while (i < max_binary)
	{
		value = 0;
		while (value < max_index)
		{
			if ((list_radix->value >> i) & 1)
				ra(&list_radix);
			else
				pb(&list_radix, b);
			value++;
		}
		while (*b)
			pa(&list_radix, b);
		i++;
	}
	ft_free(list_radix);
}
