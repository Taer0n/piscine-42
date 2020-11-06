/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:39:33 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/12 16:09:01 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_nonprintable(char c)
{
	return ((c < 32|| c > 126) ? 1 : 0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ascii_to_hex(unsigned char c)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int tmp;

	i = 0;
	while (str[i])
	{
		tmp = (unsigned char)str[i];
		if (is_nonprintable(str[i]))
		{
			ft_putchar('\\');
			ascii_to_hex(tmp);
		}
		else
			ft_putchar(tmp);
		i++;
	}
}
