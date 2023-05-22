#include "push_swap.h"

int print_whole_cycle(t_node *first)
{
    void *pointer;

    while(first->is_start != 1)
        first = first->last;
    pointer = first;
    printf("ranking = %i | numero = %i | stack = %c | is_end = %i | is_start = %i \n", first->rank, first->number, first->stack, first->is_end,first->is_start);
    first = first->next;
    while (first != pointer)
    {
        printf("ranking = %i | numero = %i | stack = %c | is_end = %i | is_start = %i \n", first->rank, first->number, first->stack, first->is_end,first->is_start);
        first = first->next;
    }
	return (0);
}

void cycle_list(t_node *a)
{
    void *pointer;

    while(a->last != NULL)
        a = a->last;
    pointer = a;
    while(a->next != NULL)
        a = a->next;
    a->next = pointer;
    pointer = a;
    a = a->next;
    a->last = pointer;
}

int nice_tester(t_node *stack)
{
    cycle_list(stack);
    ft_printf("#### LIST CYCLED ####\n");
    print_whole_cycle(stack);
    s(stack, 'a');
    s(stack, 'b');
    ft_printf("#### SA DONE ####\n");
    print_whole_cycle(stack);
    r(stack, 'a');
    r(stack, 'b');
    ft_printf("#### RA DONE ####\n");
    print_whole_cycle(stack);
    rr(stack, 'a');
    rr(stack, 'b');
    ft_printf("#### RRA DONE ####\n");
    print_whole_cycle(stack);
    p(stack, 'a');
    p(stack, 'b');
    ft_printf("#### PA DONE ####\n");
    print_whole_cycle(stack);
}