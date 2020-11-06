/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:45:56 by hdelesse          #+#    #+#             */
/*   Updated: 2020/10/18 19:08:52 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_input_check(char *str)
{
	int i;

	if (!(ft_strlen(str) == 31))
		return (0);
	i = 0;
	while (str[i] && str[i] >= '1' && str[i] <= '4')
	{
		if (i < 31 && str[i + 1] == ' ')
			i = i + 2;
		if (str[i + 1] == '\0')
			return (1);
	}
	return (0);
}
