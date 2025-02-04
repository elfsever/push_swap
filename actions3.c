/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:04:11 by esever            #+#    #+#             */
/*   Updated: 2025/01/25 12:13:48 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **node_a, t_stack **node_b)
{
	t_stack	*add;

	if (*node_b != NULL)
	{
		add = *node_b;
		*node_b = (*node_b)->next;
		add->next = *node_a;
		*node_a = add;
		write(1, "pa\n", 3);
	}
	return ;
}

void	pb(t_stack **node_a, t_stack **node_b)
{
	t_stack		*add;

	if (*node_a != NULL)
	{
		add = *node_a;
		*node_a = (*node_a)->next;
		add->next = *node_b;
		*node_b = add;
		write(1, "pb\n", 3);
	}
	return ;
}
