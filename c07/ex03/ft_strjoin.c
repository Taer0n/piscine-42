/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:25:33 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/27 12:15:12 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		calc_final_length(int size, char **strs, int sep)
{
	int	i;
	int	final_length;

	i = 0;
	final_length = 0;
	while (i < size)
	{
		final_length += ft_strlen(strs[i]);
		final_length += sep;
		i++;
	}
	final_length -= sep;
	return (final_length);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		final_length;

	i = 0;
	final_length = calc_final_length(size, strs, ft_strlen(sep));
	if (size == 0)
		return (str = malloc(sizeof(str)));
	if (!(str = malloc(sizeof(str) * (final_length + 1))))
		return (0);
	*str = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[final_length] = '\0';
	return (str);
}
