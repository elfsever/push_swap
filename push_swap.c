/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:49:07 by esever            #+#    #+#             */
/*   Updated: 2025/01/25 15:12:44 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_free(t_stack **a, t_stack **b, int ac)
{
	free_stack(a);
	free_stack(b);
	error(ac, NULL);
}

int	main(int ac, char *av[])
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (ac < 2)
		return (0);
	check_av(ac, av);
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	if (!stack_a || !stack_b)
		stack_free(stack_a, stack_b, ac);
	*stack_a = NULL;
	*stack_b = NULL;
	add_stack(stack_a, ac, av);
	add_index(stack_a);
	if (check_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	main_sort(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
