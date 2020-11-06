/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmapgenerator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:33:21 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/18 18:41:12 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_create_tab(char *tab)
{
	char	**ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ret = malloc(sizeof(ret) * 6);
	while (i < 6)
	{
		ret[i] = malloc(sizeof(*ret) * 6);
	   	i++;	
	}
	i = 0;
	while (tab[i])
	{
		if (j < 4)
			ret[0][j + 1] = tab[i];
		else if (j < 8)
			ret[5][1 + j - 4] = tab[i];
		else if (j < 12)
			ret[1 + j - 8][0] = tab[i];
		else if (j < 16)
			ret[1 + j - 12][5] = tab[i];
		j++;
		i += 2;
	}
	return (ret);
}

int		ft_is_tab_valid(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] && j < 8)
	{
		if (j < 4)
		{
			if ((tab[0][j + 1] - 48) + (tab[5][j + 1] - 48) > 5)
			{
				return (0);
			}
		}
		else
		{
			if ((tab[1 + j - 4][0] - 48) + (tab[1 + j - 4][5] - 48) > 5)
				return (0);
		}
		i++;
		j++;
	}
	return (1);
}
