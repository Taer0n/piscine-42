/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:04:55 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/19 16:08:12 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	(void)argc;
	i = 0;
	j = 0;
	while (argv[i])
		i++;
	i -= 1;
	while (i > 0)
	{
		while (argv[i][j])
			j++;
		write(1, &argv[i][0], j);
		write(1, "\n", 1);
		j = 0;
		i--;
	}
}
