/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:31:12 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/18 19:19:25 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	fill_four(char **tab, int y, int x, int direction)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (direction == 0)
			y++;
		else if (direction == 1)
			y--;
		else if (direction == 2)
			x--;
		else
			x++;
		if (tab[y][x] != 0 && tab[y][x] != i + 48)
			return (0);
		tab[y][x] = i + 48;
		i++;
	}
	return (1);
}

int	fill_one(char **tab, int y, int x, int direction)
{
	if (direction == 0)
		y++;
	else if (direction == 1)
		y--;
	else if (direction == 2)
		x--;
	else
		x++;
	if (tab[y][x] != 0)
		return (0);
	tab[y][x] = '4';
	return (1);
}

int	fill_3_2(char **tab, int y, int x, int direction)
{
	if (direction == 0)
		y = 2;
	else if (direction == 1)
		y = 3;
	else if (direction == 2)
		x = 3;
	else
		x = 2;
	if (tab[y][x] != 0 && tab[y][x] != '4')
		return (0);
	tab[y][x] = '4';
	return (1);
}

int	fill_1_2(char **tab, int y, int x, int direction)
{
	if (direction == 0)
		y = 2;
	else if (direction == 1)
		y = 3;
	else if (direction == 2)
		x = 3;
	else
		x = 2;
	if (tab[y][x] != 0 && tab[y][x] != '3')
		return (0);
	tab[y][x] = '3';
	return (1);
}
