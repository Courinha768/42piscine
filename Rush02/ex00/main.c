/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:52:00 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/27 19:35:38 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 4096

void	ft_double_1(char d, char u, char *dict);

void	ft_double_0(char u, char *dict);

void	ft_double_2(char d, char u, char *dict);

char	*ft_findsuf(int counter, char *dict);

char	*ft_strstr(char *str, char *to_find);

void	ft_putstr(char *str);

int		ft_special_strleng(char *str, int k);

int		ft_atoi(char c);

void	fnormi(int argc, char const **argv);

char	*idk(char *str, int i);

int		zero(char *str, char *dict);

int		checkarg(char *str);

void	ft_triple(char c, char *dict)
{
	char	*str;
	char	temp[2];

	if (c != '0')
	{
		str = "100\0";
		temp[0] = c;
		temp[1] = '\0';
		ft_putstr (ft_strstr(dict, temp));
		write (1, " ", 1);
		ft_putstr (ft_strstr(dict, str));
		write (1, " ", 1);
	}
}

void	ft_single(char u, int counter, char *dict)
{
	char	temp[2];
	int		i;
	int		j;

	temp[0] = u;
	temp[1] = '\0';
	ft_putstr (ft_strstr(dict, temp));
	if (counter > 3)
	{
		write(1, " ", 1);
		i = 0;
		j = 0;
		ft_putstr (ft_findsuf(counter, dict));
		write(1, " ", 1);
	}
}

void	ft_double(char *a, int c, char *dict, int k)
{
	if (!(a[0] == '\0' || (a[1] == '0' && a[2] == '0')) && c < 4 && (k > 2))
		write (1, "and ", 4);
	if (ft_atoi(a[1]) > 1)
	{
		ft_double_2(a[1], a[2], dict);
	}
	else if (ft_atoi(a[1]) == 1)
	{
		ft_double_1(a[1], a[2], dict);
	}
	else
	{
		ft_double_0(a[2], dict);
	}
	if (c > 3 && (a[0] != '0' || a[1] != '0' || a[2] != '0'))
	{
		if (a[1] != '0' || a[2] != '0')
			write(1, " ", 1);
		ft_putstr(ft_findsuf(c, dict));
		write(1, " ", 1);
	}
}

void	ft_start(char *dict, char *str)
{
	int	i;
	int	j;
	int	k;
	int	counter;

	i = zero(str, dict);
	counter = ft_special_strleng(str, i);
	k = counter;
	while (counter > 0)
	{
		if (counter % 3 == 2)
		{	
			ft_double(idk(str, i), counter, dict, k);
			i = i + 2;
		}
		else if (counter % 3 == 0)
			ft_triple(str[i++], dict);
		else
			ft_single(str[i++], counter, dict);
		counter = 0;
		j = i;
		counter = ft_special_strleng(str, j);
	}
	write(1, "\n", 1);
}

int	main(int argc, char const **argv)
{
	if (argc == 2)
	{
		if (checkarg((char *)argv[1]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	if (argc == 3)
	{
		if (checkarg((char *)argv[2]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	fnormi(argc, argv);
}
