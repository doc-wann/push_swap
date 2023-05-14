#include "./libft/libft.h"
#include "./printf/ft_printf.h"

#include <stdio.h>

typedef struct s_control
{
	int size;
	int remove;
} t_control;

typedef struct s_node
{
	int number;
	unsigned int rank;
	struct s_node *next;
	struct s_node *last;
} t_node;


// PUSH_SWAP_MOVES.C
void	ra(t_node *node);
void	rra(t_node *node);
void	sa(t_node *node);

void	tester(t_node *a, t_control *cont);

int print_every_slot(t_node *first);

int		ft_sort_first(t_node *first, char **og);
char	**ft_strdup_multiple(char **str);

void	ra(t_node *node);
void	rb(t_node *node);
void	rra(t_node *node);
void	rrb(t_node *node);
void	sa(t_node *node);
void	sb(t_node *node);
void	ss_mute(t_node *node);
void	rr_mute(t_node *node);
void	rrr_mute(t_node *node);
void	ss(t_node *a, t_node *b);
void	rr(t_node *a, t_node *b);
void	rrr(t_node *a, t_node *b);
void	pa(t_node *a, t_node *b);
void	pb(t_node *a, t_node *b);

