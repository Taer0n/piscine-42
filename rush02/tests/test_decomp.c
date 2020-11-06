/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_decomp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:06:24 by lbertran          #+#    #+#             */
/*   Updated: 2020/10/24 16:27:48 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		count_groups(int len)
{
	int	i;

	i = 0;
	while (len > 3)
	{
		len -= 3;
		i++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	decomp(char *str)
{
	int len = ft_strlen(str);
	int groups = count_groups(len);
	if (len < 3)
	{
		//printf("entre 0 et 99\n");
		printf("%d\n", (str[0] - 48) * 10);
		if (str[1] - 48 > 0)
			printf("%d\n", str[1] - 48);
	}
	else if (len == 3)
	{
		//printf("entre 100 et 999\n");
		printf("%d\n", str[0] - 48);
		printf("cent\n");
		str++;
		decomp(str);
	}
	else if (len == 4)
	{
		//printf("milliers\n");
		printf("%d\n", str[0] - 48);
		printf("mille\n");
		str++;
		decomp(str);
	}
	else if (len % 3 == 0)
	{
		//printf("centaines de qqch\n");
		printf("%d\n", str[0] - 48);
		printf("cent\n");
		str++;
		decomp(str);
	}
	else if (len % 3 == 2)
	{
		//printf ("dizaines de qqch\n");
		if (groups == 1) // dizaines de milliers
		{
			printf("%d\n", (str[0] - 48) * 10);
			if (str[1] - 48 > 0)
				printf("%d\n", str[1] - 48);
			printf("mille\n");
			str += 2;
			decomp(str);
		}
	}
	else
		printf("unites\n");
	//printf("%d groupes de 3 chiffres\n", groups);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("./a.out <chiffre a tester>\n");
		return (0);
	}
	decomp(av[1]);
}
