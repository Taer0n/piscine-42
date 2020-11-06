/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:14:21 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/11 17:58:48 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_writeline(int x, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == x - 1)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			ft_writeline(x, 'A', 'B', 'C');
		else
			ft_writeline(x, 'B', ' ', 'B');
		ft_putchar('\n');
		i++;
	}
}
