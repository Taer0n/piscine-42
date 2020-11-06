/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decomp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:27:44 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/25 19:29:45 by arita            ###   ########lyon.fr   */
/*   Updated: 2020/10/25 11:26:39 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_stringutils.h"
#include "../include/ft_unit.h"
#include "../include/ft_atoi.h"
#include "../include/ft_dictionary.h"
#include "../include/s_dictionary.h"

void ft_decomp(char *str, t_dictionary data);

void	decomp_dizaines(char *str, int groups, int len, t_dictionary data)
{
	char	tab[2];
	int		val;

	tab[0] = str[0];
	tab[1] = str[1];
	val = ft_atoi(tab);
	if (val < 20)
	{
		if (val > 0)
			ft_putstrspace(val, 1, data);
	}
	else
	{
		ft_putstrspace((str[0] - 48) * 10, 1, data);
		if (str[1] - 48 > 0)
			ft_putstrspace(str[1] - 48, 1, data);
	}
	if (val > 0)
		convert_groups_to_dictionary(groups, groups > 1);
	if (len > 3)
	{
		str += 2;
		ft_decomp(str, data);
	}
}

void	decomp_unites(char *str, int groups, int len, t_dictionary data)
{
	if (str[0] - 48 > 0 && len > 6)
		ft_putstrspace(str[0] - 48, 1, data);
	if (str[0] - 48 > 0)
		convert_groups_to_dictionary(groups, groups > 1);
	str++;
	ft_decomp(str, data);
}

void	decomp_centaines(char *str, int groups, t_dictionary data)
{
	if (str[0] - 48 > 1)
		ft_putstrspace(str[0] - 48, 1, data);
	if (str[0] - 48 > 0)
		ft_putstrspace(100, 1, data);
	if (str[0] - 48 > 0 && str[1] - 48 == 0 && str[2] - 48 == 0)
	{
		convert_groups_to_dictionary(groups, str[0] > 1);
		str += 2;
	}
	str++;
	ft_decomp(str, data);
}

void	ft_decomp_last_2_digit(char *str, t_dictionary data)
{
	if (str[0] - 48 > 1)
		ft_putstrspace((str[0] - 48) * 10, 1, data);
	if (str[1] - 48 > 0)
		ft_putstrspace(str[1] - 48, 0, data);
}

void	ft_decomp(char *str, t_dictionary data)
{
	int	len;
	int	groups;

	len = ft_strlen(str);
	groups = count_groups(len);
	if (len < 3)
		ft_decomp_last_2_digit(str, data);
	else if (len % 3 == 0)
		decomp_centaines(str, groups, data);
	else if (len % 3 == 2)
		decomp_dizaines(str, groups, len, data);
	else if (len % 3 == 1)
		decomp_unites(str, groups, len, data);
}
