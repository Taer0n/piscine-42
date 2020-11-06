/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:54:05 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/19 16:07:01 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	(void)argc;
	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
			j++;
		write(1, &argv[i][0], j);
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
