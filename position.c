/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:48:58 by hdaniele          #+#    #+#             */
/*   Updated: 2023/06/27 15:48:59 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position_list(t_node **list)
{
	t_node	*aux;
	t_node	*aux_max;
	int		i;

	i = 0;
	aux = (*list)->next;
	aux_max = *list;
	while (aux)
	{
		if (aux_max->value < aux->value)
			aux_max = aux;
		aux = aux->next;
	}
	aux = *list;
	while (aux)
	{
		if (aux->value == aux_max->value)
			break ;
		i++;
		aux = aux->next;
	}
	return (i);
}

int	position_max(t_node **list, int i)
{
	t_node	*start;
	int		max;

	max = -1;
	start = *list;
	while (start)
	{
		if (start->value > max)
				max = start->value;
		start = start->next;
	}
	return (max);
}
