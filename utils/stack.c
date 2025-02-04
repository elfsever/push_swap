/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:31:51 by esever            #+#    #+#             */
/*   Updated: 2025/02/02 14:22:38 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_stack(t_stack **stack, int ac, char *av[])
{
	t_stack	*node;
	char	**str;
	int		i;

	node = *stack;
	i = 0;
	if (ac == 2)
		str = ft_split(av[1], ' ');
	else
	{
		i = 1;
		str = av;
	}
	if (str == NULL)
		error(ac, str);
	while (str[i])
	{
		node = ft_lstnew(ft_atoi(str[i]));
		if (!node)
			error(ac, str);
		ft_lstadd_back(stack, node);
		i++;
	}
	if (ac == 2)
		free_str(str);
}

void	fill_index(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	while (node)
	{
		node->index = -1;
		node = node->next;
	}
}

t_stack	*get_min(t_stack **stack)
{
	t_stack	*min;
	t_stack	*node;
	int		control;

	node = *stack;
	min = NULL;
	control = 0;
	if (node)
	{
		while (node)
		{
			if (node->index == -1 && (!control || node->data < min->data))
			{
				min = node;
				control = 1;
			}
			node = node->next;
		}
	}
	return (min);
}

void	add_index(t_stack **stack)
{
	t_stack	*node;
	int		index;

	index = 0;
	fill_index(stack);
	node = get_min(stack);
	while (node)
	{
		node->index = index++;
		node = get_min(stack);
	}
}

void	free_stack(t_stack **stack)
{
	t_stack	*node;
	t_stack	*temp;

	node = *stack;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	free(stack);
}
