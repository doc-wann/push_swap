#include "push_swap.h"

// int	no_main_node(t_node *node);
// t_node *start_node_empty(void);

// void	ra(t_node *node)
// {
// 	t_node	*temp;

// 	ft_printf("ra\n");
// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node;
// 	node = node->next;
// 	node->last = NULL;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = temp;
// 	temp = node;
// 	node = node->next;
// 	node->last = temp;
// 	node->next = NULL;
// }

// void	rb(t_node *node)
// {
// 	t_node	*temp;

// 	ft_printf("rb\n");
// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node;
// 	node = node->next;
// 	node->last = NULL;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = temp;
// 	temp = node;
// 	node = node->next;
// 	node->last = temp;
// 	node->next = NULL;
// }

// void	rra(t_node *node)
// {
// 	t_node	*temp;

// 	ft_printf("rra\n");
// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = temp;
// 	node->last->next = NULL;
// 	node->last = NULL;
// 	temp->last = node;
// }

// void	rrb(t_node *node)
// {
// 	t_node	*temp;

// 	ft_printf("rrb\n");
// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = temp;
// 	node->last->next = NULL;
// 	node->last = NULL;
// 	temp->last = node;
// }

// void	sa(t_node *node)
// {
// 	t_node	*temp;

// 	ft_printf("sa\n");
// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node->next;
// 	node->next = node->next->next;
// 	node->last = temp;
// 	temp->last = NULL;
// 	temp->next = node;
// 	node->next->last = node;
// }

// void	sb(t_node *node)
// {
// 	t_node	*temp;

// 	ft_printf("sb\n");
// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node->next;
// 	node->next = node->next->next;
// 	node->last = temp;
// 	temp->last = NULL;
// 	temp->next = node;
// 	node->next->last = node;
// }

// void	ss_mute(t_node *node)
// {
// 	t_node	*temp;

// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node->next;
// 	node->next = node->next->next;
// 	node->last = temp;
// 	temp->last = NULL;
// 	temp->next = node;
// 	node->next->last = node;
// }

// void	rr_mute(t_node *node)
// {
// 	t_node	*temp;

// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node;
// 	node = node->next;
// 	node->last = NULL;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = temp;
// 	temp = node;
// 	node = node->next;
// 	node->last = temp;
// 	node->next = NULL;
// }

// void	rrr_mute(t_node *node)
// {
// 	t_node	*temp;

// 	temp = malloc(sizeof(t_node));
// 	while (node->last != NULL)
// 		node = node->last;
// 	temp = node;
// 	while (node->next != NULL)
// 		node = node->next;
// 	node->next = temp;
// 	node->last->next = NULL;
// 	node->last = NULL;
// 	temp->last = node;
// }

// void	ss(t_node *a, t_node *b)
// {
// 	ss_mute(a);
// 	ss_mute(b);
// }

// void	rr(t_node *a, t_node *b)
// {
// 	rr_mute(a);
// 	rr_mute(b);
// }

// void	rrr(t_node *a, t_node *b)
// {
// 	rrr_mute(a);
// 	rrr_mute(b);
// }


// // int *id_complementary(t_node *a, t_node *b)
// // {
// // 	if (a = NULL && b = NULL)
// 		// return (0);
// // 	else if (a = NULL)
// // 	{
// // 		if (b->next == NULL)
// // 			return (1);
// // 		else
// // 			return (2);
// // 	}
// // 	else if (b = NULL)
// // 	{
// // 		if (a->next = NULL)
// // 			return (3);
// // 		else
// // 			return (4);
// // 	}
// // 	else if (a->next == NULL && b->next == NULL)
// // 		return (5);
// // 	else if (a->next == NULL)
// // 		return (6);
// // 	else if (b->next == NULL)
// // 		return (7);
// // 	else
// // 		return (8);
// // }

// // t_node	*pp(t_node *a, t_node *b, int which)
// // {

// // }

// // void	pa(t_node *a, t_node *b)
// // {
// // 	t_node	*temp;

// // 	ft_printf("pa\n");
// // 	temp = malloc(sizeof(t_node));
// // 	if (b == NULL)
// // 		return ;
// // 	while (b->last != NULL)
// // 		b = b->last;
// // 	while (a->last != NULL)
// // 		a = a->last;
// // 	if (b->next != NULL)
// // 		b->next->last = NULL;
// // 	b->next = a;
// // 	a->last = b;
// // }

// // void	pb(t_node *a, t_node *b)
// // {
// // 	t_node	*temp;

// // 	ft_printf("pb\n");
// // 	temp = malloc(sizeof(t_node));
// // 	temp = a;
// // 	if (no_main_node(a))
// // 		return ;
// // 	else if (no_main_node(b))
// // 	{
// // 		if (no_main_node(a->next))
// // 		{
// // 			ft_printf("no a->next checked\n");
// // 			a = b;
// // 			b = temp;
// // 		}
// // 		else
// // 		{
// // 			ft_printf("a->next checked\n");
// // 			b = temp;
// // 			ft_printf("is_b_filled?\nLAST = %s\nNEXT = %s\nNUMBER = %i\nRANK = %i\n,", b->last, b->next, b->number, b->rank);
// // 		}
// // 	}
// // 	else
// // 	{
// // 		if (no_main_node(a->next))
// // 		{
// // 			a->next = b;
// // 			b = a;
// // 			b->next->last = b;
// // 		}
// // 		else
// // 		{
// // 			a = a->next;
// // 			a->last = NULL;
// // 			temp->next = b;
// // 			b->last = temp;
// // 			b = b->last;
// // 		}
// // 	}
// // }

// // void	pb(t_node *a, t_node *b)
// // {
// // 	ft_printf("pb\n");
// // 	if (!a)
// // 		return ;
// // 	else if (!b)
// // 	{
// // 		ft_printf("nobe\n");
// // 		b = start_node_empty();
// // 		b->number = a->number;
// // 		b->rank = a->rank;
// // 		a = a->next;
// // 		a->last = NULL;
// // 	}
// // 	else
// // 	{
// // 		ft_printf("be\n");
// // 		b->last = start_node_empty();
// // 		b->last->next = b;
// // 		b = b->last;
// // 		b->number = a->number;
// // 		b->rank = a->rank;
// // 		a = a->next;
// // 		a->last = NULL;
// // 		ft_printf("is_b_filled?\nLAST = %s\nNEXT = %s\nNUMBER = %i\nRANK = %i\n\n", b->last, b->next, b->number, b->rank);
// // 		ft_printf("is_a_filled?\nLAST = %s\nNEXT = %s\nNUMBER = %i\nRANK = %i\n\n", a->last, a->next, a->number, a->rank);
// // 	}
// // }

// // void	pb(t_node *a, t_node *b)
// // {
// // 	t_node *new;
// // 	while

// // 	new = malloc(sizeof(t_node));
// // 	new = a;
// // 	a = a->next;
// // 	a->last = NULL;
// // 	new->next = NULL;
// // }

// int	no_main_node(t_node *node)
// {
// 	if (!node)
// 		return (1);
// 	else
// 		return (0);
// }

// t_node *start_node_empty(void)
// {
// 	t_node *new;

// 	new = malloc(sizeof(t_node));
// 	if (!new)
// 		exit(1);
// 	new->number = 0;
// 	new->rank = 0;
// 	new->next = NULL;
// 	new->last = NULL;
// 	return (new);
// }



// ###THIS IS WHERE THE REFACTOR BEGINS###

void swap_values(t_node *a, t_node *b)
{
	int rank_b;
	int	number_b;
	char	stack_b;

	rank_b = a->rank;
	number_b = a->number;
	stack_b = a->stack;
	a->rank = b->rank;
	a->number = b->number;
	a->stack = b->stack;
	b->rank = rank_b;
	b->number = number_b;
	b->stack = stack_b;
}

void s(t_node *node, char a)
{
	if (a == 'a')
	{
		while (node->stack != 'S')
    		node = node->next;
    	node = node->next;
		if (node->stack == 'E')
			return ;
	}
	else
	{
		while (node->stack != 'E')
    		node = node->next;
    	node = node->next;
		if (node->stack == 'S')
			return ;
	}
	if (node->next->stack == a)
	{
		swap_values(node, node->next);
	}
	else
	{
		return ;
	}
}

void full_rotation(t_node *node, char del)
{
	if (del == 'S')
	{
		while (node->next->stack != 'E')
		{
			swap_values(node, node->next);
			node = node->next;
		}
	}
	else if (del == 'E')
	{
		while (node->next->stack != 'S')
		{
			swap_values(node, node->next);
			node = node->next;
		}
	}
}

void full_rrotation(t_node *node, char del)
{
	if (del == 'S')
	{
		while (node->last->stack != 'S')
		{
			swap_values(node, node->last);
			node = node->last;
		}
	}
	else if (del == 'E')
	{
		while (node->last->stack != 'E')
		{
			swap_values(node, node->last);
			node = node->last;
		}
	}
}

void r(t_node *node, char a)
{
	if (a == 'a')
	{
		while (node->stack != 'S')
    		node = node->next;
    	node = node->next;
		if (node->stack == 'E')
			return ;
		full_rotation(node, 'S');
	}
	else
	{
		while (node->stack != 'E')
    		node = node->next;
    	node = node->next;
		if (node->stack == 'S')
			return ;
		full_rotation(node, 'E');
	}
}

void rr(t_node *node, char a)
{
	if (a == 'a')
	{
		while (node->stack != 'E')
    		node = node->next;
    	node = node->last;
		if (node->stack == 'S')
			return ;
		full_rrotation(node, 'S');
	}
	else
	{
		while (node->stack != 'S')
    		node = node->next;
    	node = node->last;
		if (node->stack == 'E')
			return ;
		full_rrotation(node, 'E');
	}
}

void p(t_node *node, char a)
{
	if (a == 'a')
	{
		printf("watermark\n");
		while (node->stack != 'S')
    		node = node->next;
		if (node->next->stack == 'E')
			return ;
		swap_values(node, node->next);
		node->stack = 'b';
		rr(node, 'b');
	}
	else
	{
		printf("watermark2\n");
		while (node->stack != 'E')
    		node = node->next;
		if (node->next->stack == 'S')
			return ;
		swap_values(node, node->next);
		node->stack = 'a';
		rr(node, 'a');
	}
}
// void rr(t_node *node, char a)
// {
// 	void	*marker;
// 	int		rank_b;
// 	int		value_b;
// 	int		ctr;

// 	ctr = 0;
// 	marker = node;
// 	while(node->is_end != 1 || node->stack != a)
// 	{
//         node = node->next;
// 		if (node == marker && ctr == 0)
// 			ctr++;
// 		else if (node == marker && ctr == 1)
// 			return ;
// 	}
// 	ft_printf("rr%c\n", a);
// 	value_b = node->number;
// 	rank_b = node->rank;
// 	while(node->is_start != 1)
// 	{
// 		node->number = node->last->number;
// 		node->rank = node->last->rank;
// 		node = node->last;
// 	}
// 	node->number = value_b;
// 	node->rank = rank_b;
// }

// int has_stack(t_node *node, char x)
// {
// 	void	*marker;
// 	int		ctr;
// 	char	var;

// 	if (x == 'a')
// 		var = 'b';
// 	else
// 		var = 'a';
// 	ctr = 0;
// 	marker = node;
// 	while(1)
// 	{
//         node = node->last;
// 		if (node->stack == var)
// 			return (1);
// 		if (node == marker && ctr == 0)
// 			ctr++;
// 		else if (node == marker && ctr == 1)
// 			return (0);
// 	}
// }

// void p_reg(t_node *node, char x)
// {
// 	char	var;

// 	if (x == 'a')
// 		var = 'b';
// 	else
// 		var = 'a';
// 	node->stack = var;
// 	node->is_end = 1;
// 	node->next->is_start = 1;
// }

// //requires work - Must act like a diff function.
// void p_act(t_node *node, char x)
// {
// 	char	var;

// 	if (x == 'a')
// 		var = 'b';
// 	else
// 		var = 'a';
// 	node->stack = var;
// 	node->next->is_start = 1;
// }

// void p(t_node *node, char a)
// {
// 	void	*marker;
// 	int		rank_b;
// 	int		value_b;
// 	int		ctr;

// 	ctr = 0;
// 	marker = node;
// 	while(node->is_start != 1 || node->stack != a)
// 	{
//         node = node->last;
// 		if (node == marker && ctr == 0)
// 			ctr++;
// 		else if (node == marker && ctr == 1)
// 			return ;
// 	}
// 	ft_printf("p%c\n", a);
// 	if (has_stack(node, a))
// 		p_act(node, a);
// 	else
// 		p_reg(node, a);
// }