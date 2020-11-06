/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:46:13 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/25 19:32:04 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../include/s_dictionary.h"
#include "../include/ft_dictionary.h"
#include "../include/ft_itoa.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		count_groups(int len)
{
	int	i;

	i = 0;
	while (len > 3)
	{
		len -= 3;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstrspace(char *str, int space)
{
	write(1, &str, ft_strlen(str));
	if (space)
		write (1, " ", 1);
}
