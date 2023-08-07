/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:49:04 by hdaniele          #+#    #+#             */
/*   Updated: 2023/07/14 18:31:34 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

t_node	*new_index(t_node **a);
t_node	*create_list(char *num);
t_node	*link_next(t_node *lista);
t_node	*create_list2(int num);
size_t	push_strlen(t_node *p);
void	ft_free(t_node *list);
void	linker(t_node **list, t_node *num);
void	put_last(t_node **list, t_node *num);
void	execution(t_node **stack_a, t_node **stack_b, int argc);
void	swap_ss(t_node **stack_a, t_node **stack_b);
void	ft_swap_ab(t_node **lista, char c);
void	ft_swap(t_node **lista);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **a);
void	order_three(t_node **list);
void	order_four(t_node **a, t_node **b);
void	order_five(t_node **a, t_node **b);
void	moves_four(t_node **a, t_node **b, int i);
void	moves_five(t_node **list, t_node **b, int i);
void	radix(t_node **a, t_node **b, int max_index);
int		size_binary(int max);
int		position_list(t_node **list);
int		position_max(t_node **list, int i);
int		main(int argc, char **argv);
void	ft_is_overflow(char *overflower);
char	*ft_stringcleaner_int(char *overflower);
int		check_argv(char *str);
int		check_error(t_node **list);
int		duplicated(t_node **list);
int		order(t_node **list);
int		check_n(char *str);
int		check_max_min(char *str);

#endif
