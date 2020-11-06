/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:32:12 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/26 10:42:37 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	current;
	int	i;

	current = min;
	i = 0;
	ptr = NULL;
	if (min >= max)
		return (ptr);
	if (!(ptr = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (current < max)
	{
		ptr[i] = current;
		current++;
		i++;
	}
	return (ptr);
}
