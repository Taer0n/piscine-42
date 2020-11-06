/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringutils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:46:59 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/25 17:50:07 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGUTILS_H
# define FT_STRINGUTILS_H
#include "s_dictionary.h"

int		ft_strlen(char *str);
int		count_groups(int len);
void	ft_putstrspace(int nbr, int space, t_dictionary data);
char	*ft_strcpy(char *dest, char *src);

#endif
