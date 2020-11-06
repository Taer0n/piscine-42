/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:18:49 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/18 19:26:27 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	ft_fill_up_or_down(char **tab, int x, int y)
{
	if (tab[y][x] == '4')
	{
		if (!fill_four(tab, y, x, (y == 0 ? 0 : 1)))
			return (0);
	}
	else if (tab[y][x] == '1')
	{
		if (!fill_one(tab, y, x, (y == 0 ? 0 : 1)))
			return (0);
	}
	else if (y == 0 && tab[y][x] == '3' && tab[5][x] == '2')
	{
		if (!fill_3_2(tab, y, x, 1))
			return (0);
	}
	else if (y == 5 && tab[y][x] == '3' && tab[0][x] == '2')
	{
		if (!fill_3_2(tab, y , x, 0))
			return (0);
	}
	else if (y == 0 && tab[y][x] == '1' && tab[5][x] == '2')
	{
		if (!fill_1_2(tab, y, x, 1))
			return (0);
	}
	else if (y == 5 && tab[y][x] == '1' && tab[0][x] == '2')
	{
		if (!fill_1_2(tab, y , x, 0))
			return (0);
	}
	return (1);
}

int	ft_fill_side(char **tab, int x, int y)
{
	if (tab[y][x] == '4')
	{
		if (!fill_four(tab, y, x, (x == 0 ? 3 : 2)))
			return (0);
	}
	else if (tab[y][x] == '1')
	{
		if (!fill_one(tab, y, x, (x == 0 ? 3 : 2)))
			return (0);
	}
	else if (x == 0 && tab[y][x] == '3' && tab[y][5] == '2')
	{
		if (!fill_3_2(tab, y, x, 2))
			return (0);
	}
	else if (x == 5 && tab[y][x] == '3' && tab[y][0] == '2')
	{
		if (!fill_3_2(tab, y, x, 3))
			return (0);
	}
	else if (x == 0 && tab[y][x] == '1' && tab[y][5] == '2')
	{
		if (!fill_1_2(tab, y, x, 2))
			return (0);
	}
	else if (x == 5 && tab[y][x] == '1' && tab[y][0] == '2')
	{
		if (!fill_1_2(tab, y, x, 3))
			return (0);
	}
	return (1);
}

int	ft_prefill(char **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 6)
	{
		while (x < 6)
		{
			if (y == 0 || y == 5)
			{
				if (!ft_fill_up_or_down(tab, x, y))
					return (0);
			}
			else if ((y > 0 && y < 5) && (x == 0 || x == 5))
			{
				if (!ft_fill_side(tab, x, y))
					return (0);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}
