/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:28:39 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/19 09:53:15 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	current;

	result = 1;
	current = 1;
	if (nb < 0)
		return (0);
	while (current <= nb)
	{
		result *= current;
		current++;
	}
	return (result);
}
