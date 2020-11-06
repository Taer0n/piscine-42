/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:28:37 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/15 11:57:42 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
