/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:16:42 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/21 10:19:31 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		array_contains(char *tab, char c)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_base_valid(char *base)
{
	int		i;
	char	compare[ft_strlen(base)];

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	if (array_contains(base, '+') || array_contains(base, '-'))
		return (0);
	while (base[i])
	{
		if (!array_contains(compare, base[i]))
			compare[i] = base[i];
		else
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		baselength;

	nb = nbr;
	baselength = ft_strlen(base);
	if (!is_base_valid(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= baselength)
	{
		ft_putnbr_base(nb / baselength, base);
		ft_putnbr_base(nb % baselength, base);
	}
	else
		ft_putchar(base[nb % baselength]);
}
