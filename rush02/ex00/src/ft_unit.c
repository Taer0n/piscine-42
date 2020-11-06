/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:09:59 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/25 19:32:17 by arita            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*convert_groups_to_dictionary(int groups, int plural)
{
	if (groups == 1)
		return ("mille");
	else if (groups == 2)
		return (plural ? "millions" : "million");
	else if (groups == 3)
		return (plural ? "milliards" : "milliard");
	return ("null");
}
