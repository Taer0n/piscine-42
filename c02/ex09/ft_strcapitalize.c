/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:02:31 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/12 15:52:22 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	return ((c < 48 || c > 57) && (c < 65 || c > 90)
			&& (c < 97 || c > 122)) ? 0 : 1;
}

int		ft_isletter(char c)
{
	return (c < 97 || c > 122) ? 0 : 1;
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (ft_isletter(*str))
		*str -= 32;
	while (str[i])
	{
		if (!ft_is_alphanumeric(str[i]) && ft_isletter(str[i + 1]))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
