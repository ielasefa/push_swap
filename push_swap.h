#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>  

typedef struct s_stack
{
    int value;
    struct s_stack *next; 
}   t_stack;

int     ft_isdigit(int c);
int     check_number(char **input);
int     check_error(char **numbers);
int     check_input(int ac, char **av);
char    *ft_strjoin(char *s1, char *s2);
char    **ft_split(char const *s, char c);
int     check_max(char **input);
long    ft_atoi(const char *str);
int     check_espace(char **input);

t_stack *last_node(t_stack *stack);
void    add_back(t_stack **lst , t_stack *new);
t_stack *add_node(int value); 
t_stack *add_stack(int ac, char **av);
int size_node(t_stack *stack); 

void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a ,t_stack **stack_b);

void    rr(t_stack **stack_a, t_stack **stack_b);
void    rra(t_stack **stack_a);
void    rrb(t_stack **stack_b);

void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);

void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_a, t_stack **stack_b);

void sort_revirse(t_stack **stack_a ,t_stack**stack_b ,int *arr  ,int size);
int	ft_is_small(t_stack *stack_a, int *arr, int index);
void revirse_stack_a(t_stack **stack_a ,t_stack **stack_b);
int max_value(t_stack *stack_b);
int	*array_sorted(t_stack **stack_a);

////////////

void print_stack(t_stack *stack);



#endif
