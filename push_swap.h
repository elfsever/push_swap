/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:17:45 by esever            #+#    #+#             */
/*   Updated: 2025/01/25 14:51:04 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				data;
	struct s_list	*next;
}					t_stack;

void				sa(t_stack **node_a);
void				sb(t_stack **node_b);
void				ss(t_stack **node_a, t_stack **node_b);

void				ra(t_stack **node_a);
void				rb(t_stack **node_b);
void				rr(t_stack **node_a, t_stack **node_b);

void				pa(t_stack **node_a, t_stack **node_b);
void				pb(t_stack **node_a, t_stack **node_b);

void				rra(t_stack **node_a);
void				rrb(t_stack **node_b);
void				rrr(t_stack **node_a, t_stack **node_b);

void				add_stack(t_stack **stack, int ac, char *av[]);
void				fill_index(t_stack **stack);
void				add_index(t_stack **stack);
void				free_stack(t_stack **stack);

void				error(int ac, char **str);
void				check_av(int ac, char *av[]);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
long				ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
int					ft_isdigit(int c);
void				free_str(char **str);

int					check_sorted(t_stack **stack);
void				main_sort(t_stack **stack_a, t_stack **stack_b);
void				move_min_top(t_stack **stack_a, t_stack **stack_b);
t_stack				*min_node(t_stack **stack);
int					get_max_bits(t_stack **stack);

t_stack				*ft_lstnew(int data);
t_stack				*ft_lstlast(t_stack *lst);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
int					ft_lstsize(t_stack *lst);

#endif
