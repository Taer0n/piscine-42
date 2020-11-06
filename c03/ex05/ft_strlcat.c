/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 11:27:23 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/14 16:12:03 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = a;
	if (size == 0)
		return (b);
	while (src[i - a] && i < size - 1)
	{
		dest[i] = src[i - a];
		i++;
	}
	if (size != 0 && a <= size)
		dest[a + i] = '\0';
	if (size + b < a + b)
		return (b + size);
	return (a + b);
}
