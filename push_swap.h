/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:39 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/25 23:13:13 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;
// sorted
int					is_sorted(t_stack *stack_a);

//
char				**ft_split(char const *s, char c);

long				ft_atoi(const char *str, int *j);
int					check_space(char **input);
int					check_space1(char *input);
// cheak err
int					check_number(char **input);
int					check_error(char **numbers);
int					check_input(int ac, char **av);
int					check_max(char **input);

int					cheak_atoi(long r, int s, int *j);
char				*beta_strjoin(char *s1, char *s2);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *str);
// add stack
t_stack				*process_split_numbers(char **split_numbers,
						t_stack *stack_a);
int					ft_isdigit(int c);
t_stack				*add_stack(int ac, char **av);

// addnode
t_stack				*last_node(t_stack *stack);
void				add_back(t_stack **lst, t_stack *new);
t_stack				*add_node(int value);
int					size_node(t_stack *stack);

// swap
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);

// rotate reverse
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);
// reverse rotate
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);

// push
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
// sort_6
void				sort_revirse(t_stack **stack_a, t_stack **stack_b, int *arr,
						int size);
int					small(t_stack *stack_a, int *arr, int index);
void				revirse_stack_a(t_stack **stack_a, t_stack **stack_b);
int					max_value(t_stack *stack_b);
void				increment(int *start, int *end, int size);

// array sortd
int					*array_creat(t_stack **stack_a);
int					*array_sorted(int *arr, int size);

// sort_min && sort_max
void				sort(t_stack **stack_a, t_stack **stack_b, int *arr,
						int size);
void				sort_2_number(t_stack **stack_a);
void				sort_3_number(t_stack **stack_a);
void				sort_4_number(t_stack **stack_a, t_stack **stack_b);
void				sort_5_number(t_stack **stack_a, t_stack **stack_b);

// chaek min
void				sort_min(t_stack **stack_a, t_stack **stack_b);
int					min_value(t_stack *stack_a);

// free
int					free_input(char *input);
void				free_string(char **split);
void				free_stack(t_stack *stack);

// join ar
int					check_input(int ac, char **av);
char				*join_arguments(int ac, char **av);

void				ft_error(t_stack **stack);

void				print_stack(t_stack *top);

int					beta_strcmp(const char *s1, const char *s2);
#endif
