/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:25:39 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/24 15:31:41 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	array_contains(char *str, char c)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	ret[255];

	i = 0;
	j = 0;
	if (ac != 3)
	{
		printf("2 arguments stp\n");
		return (0);
	}
	while (av[1][j])
	{
		if (!array_contains(ret, av[1][j]))
		{
			ret[i] = av[1][j];
			i++;
		}
		j++;
	}
	j = 0;
	while (av[2][j])
	{
		if (!array_contains(ret, av[2][j]))
		{
			ret[i] = av[2][j];
			i++;
		}
		j++;
	}
	printf("%s\n", ret);
}
