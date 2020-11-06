/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:31:31 by msimonne          #+#    #+#             */
/*   Updated: 2020/10/25 19:23:24 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_dictionary.h"

char	*get_value(char *key, t_dictionary data)
{
	int i;

	i = 0;
	printf("avant while\n");
	while (data.key[i])
	{
		if (data.key[i] == key)
			break;
		i++;
	}
	return (data.value[i]);
}
