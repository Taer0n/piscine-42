/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 10:14:21 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/11 17:56:24 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_writeline(int x, char a, char b)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(a);
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
			ft_writeline(x, 'o', '-');
		else
			ft_writeline(x, '|', ' ');
		ft_putchar('\n');
		i++;
	}
}
