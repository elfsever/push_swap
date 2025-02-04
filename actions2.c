/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:32:19 by esever            #+#    #+#             */
/*   Updated: 2025/01/25 12:13:14 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **node)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_lstsize(*node) > 2)
	{
		first = *node;
		last = ft_lstlast(*node);
		*node = (*node)->next;
		last->next = first;
		first->next = NULL;
	}
	return ;
}

void	ra(t_stack **node_a)
{
	rotate(node_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **node_b)
{
	rotate(node_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **node_a, t_stack **node_b)
{
	rotate(node_a);
	rotate(node_b);
	write(1, "rr\n", 3);
}
