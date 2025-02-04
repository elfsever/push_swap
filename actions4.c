/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:15:32 by esever            #+#    #+#             */
/*   Updated: 2025/01/25 12:14:12 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_stack **node)
{
	t_stack	*end;
	t_stack	*second_end;

	if (ft_lstsize(*node) > 1)
	{
		end = ft_lstlast(*node);
		second_end = *node;
		while (second_end->next != end)
			second_end = second_end->next;
		second_end->next = NULL;
		end->next = *node;
		*node = end;
	}
	return ;
}

void	rra(t_stack **node_a)
{
	rrotate(node_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **node_b)
{
	rrotate(node_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **node_a, t_stack **node_b)
{
	rrotate(node_a);
	rrotate(node_b);
	write(1, "rrr\n", 4);
}
