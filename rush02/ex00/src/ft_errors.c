/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:36:09 by msimonne          #+#    #+#             */
/*   Updated: 2020/10/25 19:30:04 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_errors.h"
#include "../include/ft_print.h"

int	check_number_of_ac(int ac)
{
	if (ac != 2 && ac != 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	check_validity_of_av1(char **av)
{
	int i;

	i = 0;
	while (av[1][i])
	{
		if ((av[1][i]) < '0' || av[1][i] > '9')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_validity_of_av2(char **av)
{
	int i;

	i = 0;
	while (av[2][i])
	{
		if (av[2][i] < '0' || av[2][i] > '9')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_validity_of_av(int ac, char **av)
{
	int rtrn;

	if (ac == 2)
		rtrn = check_validity_of_av1(av);
	else
		rtrn = check_validity_of_av2(av);
	return (rtrn);
}
