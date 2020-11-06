/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_dictionary.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:11:00 by msimonne          #+#    #+#             */
/*   Updated: 2020/10/25 17:14:31 by msimonne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_DICTIONARY_H
# define S_DICTIONARY_H

#include <stdlib.h>

typedef struct	s_dictionary
{
	char		**key;
	char		**value;
}				t_dictionary;

#endif
