#include "push_swap.h"

int	no_main_node(t_node *node);
t_node *start_node_empty(void);

void	ra(t_node *node)
{
	t_node	*temp;

	ft_printf("ra\n");
	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node;
	node = node->next;
	node->last = NULL;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	temp = node;
	node = node->next;
	node->last = temp;
	node->next = NULL;
}

void	rb(t_node *node)
{
	t_node	*temp;

	ft_printf("rb\n");
	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node;
	node = node->next;
	node->last = NULL;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	temp = node;
	node = node->next;
	node->last = temp;
	node->next = NULL;
}

void	rra(t_node *node)
{
	t_node	*temp;

	ft_printf("rra\n");
	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->last->next = NULL;
	node->last = NULL;
	temp->last = node;
}

void	rrb(t_node *node)
{
	t_node	*temp;

	ft_printf("rrb\n");
	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->last->next = NULL;
	node->last = NULL;
	temp->last = node;
}

void	sa(t_node *node)
{
	t_node	*temp;

	ft_printf("sa\n");
	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node->next;
	node->next = node->next->next;
	node->last = temp;
	temp->last = NULL;
	temp->next = node;
	node->next->last = node;
}

void	sb(t_node *node)
{
	t_node	*temp;

	ft_printf("sb\n");
	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node->next;
	node->next = node->next->next;
	node->last = temp;
	temp->last = NULL;
	temp->next = node;
	node->next->last = node;
}

void	ss_mute(t_node *node)
{
	t_node	*temp;

	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node->next;
	node->next = node->next->next;
	node->last = temp;
	temp->last = NULL;
	temp->next = node;
	node->next->last = node;
}

void	rr_mute(t_node *node)
{
	t_node	*temp;

	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node;
	node = node->next;
	node->last = NULL;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	temp = node;
	node = node->next;
	node->last = temp;
	node->next = NULL;
}

void	rrr_mute(t_node *node)
{
	t_node	*temp;

	temp = malloc(sizeof(t_node));
	while (node->last != NULL)
		node = node->last;
	temp = node;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->last->next = NULL;
	node->last = NULL;
	temp->last = node;
}

void	ss(t_node *a, t_node *b)
{
	ss_mute(a);
	ss_mute(b);
}

void	rr(t_node *a, t_node *b)
{
	rr_mute(a);
	rr_mute(b);
}

void	rrr(t_node *a, t_node *b)
{
	rrr_mute(a);
	rrr_mute(b);
}

void	pa(t_node *a, t_node *b)
{
	t_node	*temp;

	ft_printf("pa\n");
	temp = malloc(sizeof(t_node));
	if (b == NULL)
		return ;
	while (b->last != NULL)
		b = b->last;
	while (a->last != NULL)
		a = a->last;
	if (b->next != NULL)
		b->next->last = NULL;
	b->next = a;
	a->last = b;
}

// void	pb(t_node *a, t_node *b)
// {
// 	t_node	*temp;

// 	ft_printf("pb\n");
// 	temp = malloc(sizeof(t_node));
// 	temp = a;
// 	if (no_main_node(a))
// 		return ;
// 	else if (no_main_node(b))
// 	{
// 		if (no_main_node(a->next))
// 		{
// 			ft_printf("no a->next checked\n");
// 			a = b;
// 			b = temp;
// 		}
// 		else
// 		{
// 			ft_printf("a->next checked\n");
// 			b = temp;
// 			ft_printf("is_b_filled?\nLAST = %s\nNEXT = %s\nNUMBER = %i\nRANK = %i\n,", b->last, b->next, b->number, b->rank);
// 		}
// 	}
// 	else
// 	{
// 		if (no_main_node(a->next))
// 		{
// 			a->next = b;
// 			b = a;
// 			b->next->last = b;
// 		}
// 		else
// 		{
// 			a = a->next;
// 			a->last = NULL;
// 			temp->next = b;
// 			b->last = temp;
// 			b = b->last;
// 		}
// 	}
// }

// void	pb(t_node *a, t_node *b)
// {
// 	ft_printf("pb\n");
// 	if (!a)
// 		return ;
// 	else if (!b)
// 	{
// 		ft_printf("nobe\n");
// 		b = start_node_empty();
// 		b->number = a->number;
// 		b->rank = a->rank;
// 		a = a->next;
// 		a->last = NULL;
// 	}
// 	else
// 	{
// 		ft_printf("be\n");
// 		b->last = start_node_empty();
// 		b->last->next = b;
// 		b = b->last;
// 		b->number = a->number;
// 		b->rank = a->rank;
// 		a = a->next;
// 		a->last = NULL;
// 		ft_printf("is_b_filled?\nLAST = %s\nNEXT = %s\nNUMBER = %i\nRANK = %i\n\n", b->last, b->next, b->number, b->rank);
// 		ft_printf("is_a_filled?\nLAST = %s\nNEXT = %s\nNUMBER = %i\nRANK = %i\n\n", a->last, a->next, a->number, a->rank);
// 	}
// }

void	pb(t_node *a, t_node *b)
{
	t_node *new;
	while

	new = malloc(sizeof(t_node));
	new = a;
	a = a->next;
	a->last = NULL;
	new->next = NULL;
}

int	no_main_node(t_node *node)
{
	if (!node)
		return (1);
	else
		return (0);
}

t_node *start_node_empty(void)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit(1);
	new->number = 0;
	new->rank = 0;
	new->next = NULL;
	new->last = NULL;
	return (new);
}
