/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:31:05 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/19 18:45:45 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(char *argv[])
{
	int	i;
	int	j;

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

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (s1[i] == s2[i] ? 0 : (unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	sort_params(int size, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

int		main(int argc, char *argv[])
{
	(void)argc;
	sort_params(argc - 1, &argv[1]);
	print_params(argv);
}
