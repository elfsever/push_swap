/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:17:55 by esever            #+#    #+#             */
/*   Updated: 2025/01/25 12:12:46 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **node)
{
	int	temp;

	if (ft_lstsize(*node) > 1)
	{
		temp = (*node)->next->data;
		(*node)->next->data = (*node)->data;
		(*node)->data = temp;
	}
	return ;
}

void	sa(t_stack **node_a)
{
	swap(node_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **node_b)
{
	swap(node_b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **node_a, t_stack **node_b)
{
	swap(node_a);
	swap(node_b);
	write(1, "ss\n", 3);
}
