/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:43:33 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/10 18:54:58 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int done;
	int i;
	int swap;

	done = 0;
	while (done < size)
	{
		i = 0;
		while (i < size - done - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			++i;
		}
		++done;
	}
}
