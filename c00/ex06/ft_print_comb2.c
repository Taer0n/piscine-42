/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:36:52 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/07 19:51:10 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int first, int second)
{
	char array[5];

	array[0] = first / 10 + 48;
	array[1] = first % 10 + 48;
	array[2] = ' ';
	array[3] = second / 10 + 48;
	array[4] = second % 10 + 48;
	write(1, &array, 5);
	if (first < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 98)
	{
		if (b < 99)
			++b;
		else
		{
			++a;
			b = a + 1;
		}
		ft_print(a, b);
	}
}
