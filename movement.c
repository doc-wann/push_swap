/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:48:51 by hdaniele          #+#    #+#             */
/*   Updated: 2023/06/27 15:48:52 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **stack_a)
{
	t_node	*aux;
	t_node	*aux2;

	aux = *stack_a;
	aux2 = aux->next;
	*stack_a = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	t_node	*aux;
	t_node	*aux2;

	aux = *stack_b;
	aux2 = aux->next;
	*stack_b = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux;
	t_node	*aux2;

	aux = *stack_a;
	aux2 = aux->next;
	*stack_a = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	aux = NULL;
	aux2 = NULL;
	aux = *stack_b;
	aux2 = aux->next;
	*stack_b = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	write(1, "ss\n", 3);
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux;

	linker(stack_a, create_list2((*stack_b)->value));
	aux = (*stack_b)->next;
	free(*stack_b);
	*stack_b = aux;
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux;

	linker(stack_b, create_list2((*stack_a)->value));
	aux = (*stack_a)->next;
	free(*stack_a);
	*stack_a = aux;
	write(1, "pb\n", 3);
}
