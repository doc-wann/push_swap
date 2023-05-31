#include "push_swap.h"

int is_sorted(t_node *stack)
{
    while (stack->stack != 'S')
        stack = stack->next;
    stack = stack->next;
	while (stack->stack != 'E')
	{
		if (stack->rank > stack->next->rank)
			return (0);
		stack = stack->next;
	}
    if (stack->next->stack != 'S')
    {
        return (0);
    }
	return (1);
}

int find_bigger(t_node *stack)
{
    int i;
    int i2;
    int value;


    while (stack->stack != 'S')
        stack = stack->next;
    stack = stack->next;
    if (stack->stack == 'E')
        return (2);
    else
    {
        value = stack->rank;
        i2 = 0;
        i = 0;
        while (stack->stack != 'E')
        {
            i++;
            if (stack->rank < value)
            {
                value = stack->rank;
                i2 = i;
            }
            stack = stack->next;
        }
    }
    if (i2 == 0)
        return(3);
    else if (i2 >= (i/2))
        return(1);
    else
        return(0);

}

int    empty_b(t_node *stack)
{
    int ctr;

    ctr = 0;
    while (stack->stack != 'E')
        stack = stack->next;
    while (stack->stack != 'S')
    {
        stack = stack->next;
        printf("pb\n");
        ctr++;
        p(stack->next, 'b');
    }
    return (ctr);
}

int sort(t_node *stack)
{
    int ret;
    int moves;

    moves = 0;
    while (!is_sorted(stack))
    {
        moves++;
        ret = find_bigger(stack);
        if (ret == 0)
        {
            printf("ra\n");
            r(stack ,'a');
        }
        else if (ret == 1)
        {
            printf("rra\n");
            rr(stack,'a');
        }
        else if (ret == 3)
        {
            printf("pa\n");
            p(stack, 'a');
        }
        else if (ret == 2)
        {
           moves += empty_b(stack);
           printf("%i - moves",moves);
           return(1);
        }
    }
} 