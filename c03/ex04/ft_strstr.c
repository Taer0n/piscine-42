/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 11:09:52 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/14 11:23:05 by lbertran         ###   ########lyon.fr   */
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

int		is_to_find(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	while (to_find[i])
	{
		if (to_find[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		if (is_to_find(&str[i], to_find))
			return (&str[i]);
		i++;
	}
	return (0);
}
