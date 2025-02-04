/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:53:22 by esever            #+#    #+#             */
/*   Updated: 2025/02/02 14:19:33 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sorted(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	if (!node || !node->next)
		return (1);
	while (node->next)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}

void	move_min_top(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	node = *stack_a;
	if (min_node(stack_a) == ft_lstlast(*stack_a))
		rra(stack_a);
	else
	{
		while (min_node(stack_a) != node)
		{
			ra(stack_a);
			node = *stack_a;
		}
	}
	pb(stack_a, stack_b);
}

t_stack	*min_node(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min;

	if (!stack || !*stack)
		return (NULL);
	min = *stack;
	tmp = min->next;
	while (tmp != NULL)
	{
		if (tmp->index < min->index)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
