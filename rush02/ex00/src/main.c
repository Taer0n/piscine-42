/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:18:18 by msimonne          #+#    #+#             */
/*   Updated: 2020/10/25 19:32:43 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/s_dictionary.h"
#include "../include/ft_errors.h"
#include "../include/ft_print.h"
#include "../include/ft_file.h"
#include "../include/ft_split.h"
#include "../include/ft_stringutils.h"

#include <string.h>

int		main(int ac, char **av)
{
	t_dictionary data;
	int				fd;
	int				i;
	int				j;
	int				k;
	int				l;
	char			*str;
	unsigned long	size;
	char			*path;
	char			**splitter;

	fd = 0;
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	str = NULL;
	splitter = NULL;
	if (ac == 2)
	{
		path = "../data/numbers.dict";
		size = ft_count_line(fd, path);
		fd = ft_open_dict(path, O_RDONLY);
	}
	else if (ac == 3)
	{
		path = av[1];
		size = ft_count_line(fd, path);
		fd = ft_open_dict(path, O_RDONLY);
	}
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (check_number_of_ac(ac) && check_validity_of_av(ac, av))
	{
		if (ac == 2)
		{
			if(!(str = (char*)malloc(sizeof(char) * size)))
				return (0);
			str = ft_get_line(fd, str, path);
			splitter = ft_split(str, " :\n");
			while (splitter[i])
				i++;
			if (i != size * 2)
			{
				ft_putstr("Dict Error\n");
				return (0);
			}
			i = 0;
			data.key = malloc(sizeof(char *) * size);
			data.value = malloc(sizeof(char *) * size);
			while (splitter[i])
			{
				if (i % 2 == 0)
				{
					while (splitter[i][j])
					{
						j++;
					}
					data.key[k] = malloc(sizeof(char) * ft_strlen(splitter[i]));
					ft_strcpy(data.key[k], splitter[i]);
					k++;
				}
				else
				{
					while (splitter[i][j])
					{
						j++;
					}
					data.value[l] = malloc(sizeof(char) * ft_strlen(splitter[i]));
					ft_strcpy(data.value[l], splitter[i]);
					l++;
				}
				i++;
			}
			data.key[k] = '\0';
			data.value[l] = '\0';
			ft_decomp(av[1], data);
		}
	}

	close(fd);
	free(str);
	free(splitter);
	free(data.key);
	free(data.value);
	return (0);
}
