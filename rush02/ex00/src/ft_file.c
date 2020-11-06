/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:40:19 by msimonne          #+#    #+#             */
/*   Updated: 2020/10/28 15:57:02 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_file.h"
#include "../include/ft_print.h"
#include "../include/ft_stringutils.h"

int				ft_open_dict(char *path, int flags)
{
	return (open(path, flags));
}

unsigned long	ft_count_letter(int const fd)
{
	unsigned long	i;
	char			courant;
	int				res;

	i = 0;
	courant = 0;
	res = read (fd, &courant, 1);
	while (courant != EOF && res == 1)
	{
		res = read (fd, &courant, 1);
		i++;
	}
	return (i);
}

unsigned long	ft_count_line(int fd, char *path)
{
	unsigned long	i;
	char			courant;
	int				res;

	i = 0;
	courant = 0;
	fd = ft_open_dict(path, O_RDONLY);
	res = read(fd, &courant, 1);
	while (courant != EOF && res == 1)
	{
		res = read (fd, &courant, 1);
		if (courant == '\n')
			i++;
	}
	close(fd);
	return (i - 1);
}

char			*ft_get_line(int const fd, char *str, char *path)
{
	int				j;
	char			courant;
	int				res;
	unsigned long	size;

	j = 0;
	courant = 0;
	size = ft_count_letter(fd);
	str = malloc(sizeof(char) * size);
	close (fd);
	ft_open_dict(path, O_RDONLY);
	res = read(fd, &courant, 1);
	while (courant != EOF && res == 1)
	{
		str[j] = courant;
		j++;
		res = read (fd, &courant, 1);
	}
	str[j - 1] = '\0';

	close(fd);
	return (str);
}
