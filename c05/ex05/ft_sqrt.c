/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:32:36 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/18 10:51:06 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	max_sqrt;

	max_sqrt = 46340;
	while (max_sqrt * max_sqrt > nb)
		max_sqrt--;
	if (max_sqrt * max_sqrt == nb)
		return (max_sqrt);
	return (0);
}
