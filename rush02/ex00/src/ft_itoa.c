/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:14:09 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/25 19:30:47 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rev_tab(char *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = swap;
		++i;
	}
	return (tab);
}

char	*ft_itoa(int nbr, char *str)
{
	long	nb;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	nb = nbr;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	while (nb)
	{
		str[i] = nb % 10;
		nb /= 10;
		i++;
	}
	if (neg)
		str[i] = '-';
	str[++i] = '\0';
	return (ft_rev_tab(str, ft_strlen(str)));
}
