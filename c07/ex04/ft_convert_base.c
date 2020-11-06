/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 09:32:33 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/26 10:37:01 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		is_base_valid(char *base);
int		ft_strlen(char *str);
int		get_in_base(char c, char *base);

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

char	*ft_putnbr_base(int nbr, char *str, char *base, int baselen)
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
		str[i] = base[nb % baselen];
		nb /= baselen;
		i++;
	}
	if (neg)
		str[i] = '-';
	str[++i] = '\0';
	return (ft_rev_tab(str, ft_strlen(str)));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	char	*str;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	if (!(str = malloc(sizeof(str) * 34)))
		return (NULL);
	nbr_int = ft_atoi_base(nbr, base_from);
	if (nbr_int == 0)
	{
		str[0] = base_to[0];
		str[1] = '\0';
		return (str);
	}
	return (ft_putnbr_base(nbr_int, str, base_to, ft_strlen(base_to)));
}
