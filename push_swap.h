#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>  

struct s_stack
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
t_stack last_node(t_stack *last);
void    add_back(t_stack **lst , t_stack *new);
t_stack *add_node(int value)  
t_stack first_node(t_stack stack);

//rules
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack ** stack_a ,t_stack **stack_b);



#endif
