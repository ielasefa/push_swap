/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:39 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 17:05:21 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUSH
# define PUSH_SWAP_BONUSH

# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

// sorted
int	is_sorted(t_stack *stack_a);

//
char				**ft_split(char const *s, char c);
long				ft_atoi(const char *str);
int					check_espace(char **input);

//cheak err
int					check_number(char **input);
int					check_error(char **numbers);
int					check_input(int ac, char **av);
int					check_max(char **input);

char				*ft_strjoin(char *s1, char *s2);

// add stack
t_stack 			*process_split_numbers(char **split_numbers, t_stack *stack_a);
int					ft_isdigit(int c);
t_stack 			*add_stack(int ac, char **av);

 // addnode
t_stack				*last_node(t_stack *stack);
void				add_back(t_stack **lst, t_stack *new);
t_stack				*add_node(int value);
int					size_node(t_stack *stack);

// swap
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);

//rotate reverse 
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);
// reverse rotate
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);

//push
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);

void				sort_revirse(t_stack **stack_a, t_stack **stack_b, int *arr,
						int size);
int					small(t_stack *stack_a, int *arr, int index);
void				revirse_stack_a(t_stack **stack_a, t_stack **stack_b);
int					max_value(t_stack *stack_b);
void				increment(int *start, int *end, int size);

//array sortd
int					*array_creat(t_stack **stack_a);
int					*array_sorted(int *arr, int size);

// sort_min && sort_max
void				sort(t_stack **stack_a, t_stack **stack_b, int *arr,
						int size);
void				sort_2_number(t_stack **stack_a);
void				sort_3_number(t_stack **stack_a);
void				sort_4_number(t_stack **stack_a, t_stack **stack_b);
void				sort_5_number(t_stack **stack_a, t_stack **stack_b);

//chaek min
void				sort_min(t_stack **stack_a, t_stack **stack_b);
int					min_value(t_stack *stack_a);

// free
int						free_input(char *input);
void				free_split(char **split);
void	free_stack(t_stack *stack);

//print_stack
void				print_stack(t_stack *stack);

//get_next_line 
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

//comper

void   set_ins(t_stack **stack_a ,t_stack **stack_b ,char *get);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
