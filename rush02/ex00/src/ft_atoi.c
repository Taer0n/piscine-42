/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:28:49 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/25 19:22:21 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_int(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return (c == ' '
			|| c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\f'
			|| c == '\r');
}

int	ft_atoi(char *str)
{
	int	i;
	int result;
	int neg;

	i = 0;
	result = 0;
	neg = 1;
	if (!str[i])
		return (0);
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (is_int(str[i]))
	{
		result = result * 10 + (str[i] - 48) * neg;
		i++;
	}
	return (result);
}
