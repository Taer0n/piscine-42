/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:52:38 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/19 13:54:24 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	while (i <= nb / 2 && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(nb))
		{
			nb++;
			if (nb % 10 == 2 || nb % 10 == 6 || nb % 10 == 8)
				nb++;
			else if (nb % 10 == 4)
				nb += 3;
			else if (nb % 10 == 5)
				nb += 2;
		}
	}
	return (nb);
}
