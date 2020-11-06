/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:21:23 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/23 13:05:20 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		get_w_start(char *str, char *charset, int index)
{
	int	i;

	i = index;
	while (!is_sep(str[i], charset))
	{
		if (i == 0)
		{
			i = -1;
			break ;
		}
		i--;
	}
	i += 1;
	return (i);
}

char	*ft_strndup(char *str, int start, int end)
{
	char	*ret;
	int		i;

	i = 0;
	if (!(ret = malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	while (start <= end)
	{
		ret[i] = str[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

int		count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && (is_sep(str[i + 1], charset)
					|| !str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		i;
	int		wc;

	i = 0;
	wc = 0;
	if (!(ret = malloc(sizeof(char*) * (count_words(str, charset) + 1))))
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], charset) && (is_sep(str[i + 1], charset)
					|| !str[i + 1]))
		{
			ret[wc] = ft_strndup(str, get_w_start(str, charset, i), i);
			wc++;
		}
		i++;
	}
	ret[wc] = 0;
	return (ret);
}
