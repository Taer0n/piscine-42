/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:59:47 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/18 18:41:45 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "ft_input_check.h"
# include "ft_generatetab.h"
# include "print.h"
# include "ft_prefill.h"
# include <unistd.h>

int		ft_input_check(char *str);
char	**ft_create_tab(char *tab);
int		ft_is_tab_valid(char **tab);
void	ft_print(char **tab);
void	ft_prefill(char **tab);

int	main(int argc, char *argv[])
{
	char **tab;
	
	if (argc < 2)
		write(1, "Error\n", 6);
	else if (!ft_input_check(argv[1]))
		write(1, "Error\n", 6);
	else
	{
		tab = ft_create_tab(argv[1]);
		if (!ft_is_tab_valid(tab))
			write(1, "Error\n", 6);
		else
		{
			ft_prefill(tab);
			ft_print(tab);
		}
	}
}
