/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:07:21 by esever            #+#    #+#             */
/*   Updated: 2025/02/02 14:42:42 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(int ac, char **str)
{
	write(2, "Error\n", 6);
	if (ac == 2)
		free_str (str);
	exit(1);
}

static int	nbr_control(char *num)
{
	if (*num == '-' || *num == '+')
	{
		num++;
		if (!ft_isdigit(*num))
			return (1);
	}
	while (*num)
	{
		if (!ft_isdigit(*num))
			return (1);
		num++;
	}
	return (0);
}

static int	same_control(int nbr, char *str[], int i)
{
	i++;
	while (str[i])
	{
		if (ft_atoi(str[i]) == nbr)
			return (1);
		i++;
	}
	return (0);
}

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	check_av(int ac, char *av[])
{
	int		i;
	long	num;
	char	**str;

	i = -1;
	if (ac == 2)
		str = ft_split(av[1], ' ');
	else
	{
		i = 0;
		str = av;
	}
	if (str == NULL)
		error(ac, str);
	while (str[++i])
	{
		num = ft_atoi(str[i]);
		if (same_control(num, str, i) || nbr_control(str[i]) || num
			< -2147483648 || num > 2147483647)
			error(ac, str);
		if (ft_strlen(str[i]) > 12)
			error(ac, str);
	}
	if (ac == 2)
		free_str(str);
}
