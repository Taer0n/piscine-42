/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:01:58 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/21 08:52:30 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_base_valid(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == ' '
				|| (base[i] >= 9 && base[i] <= 13)
				|| base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int		get_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	neg;

	i = 0;
	result = 0;
	neg = 1;
	if (!is_base_valid(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i])
	{
		if (get_in_base(str[i], base) == -1)
			return (result);
		result = result * ft_strlen(base) + get_in_base(str[i], base) * neg;
		i++;
	}
	return (result);
}
