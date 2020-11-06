/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:55:56 by msimonne          #+#    #+#             */
/*   Updated: 2020/10/25 17:00:26 by msimonne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int				ft_open_dict(char *path, int flags);
unsigned long	ft_count_letter(int const fd);
unsigned long	ft_count_line(int fd, char *path);
char			*ft_get_line(int const fd, char *str, char *path);

#endif
