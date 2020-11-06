/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:29:32 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/07 16:35:46 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *array)
{
	write(1, &array[0], 1);
	write(1, &array[1], 1);
	write(1, &array[2], 1);
	if (array[0] != 55 || array[1] != 56 || array[2] != 57)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char array[3];

	array[0] = '0';
	array[1] = '1';
	array[2] = '2';
	ft_print(array);
	while (array[0] != 55 || array[1] != 56 || array[2] != 57)
	{
		if (array[2] < '9')
			array[2]++;
		else if (array[1] < '8')
		{
			array[1]++;
			array[2] = array[1] + 1;
		}
		else
		{
			array[0]++;
			array[1] = array[0] + 1;
			array[2] = array[1] + 1;
		}
		ft_print(array);
	}
}
