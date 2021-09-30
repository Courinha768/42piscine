/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:36:43 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/30 13:19:12 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_findsuf(int counter, char *dict);

char	*ft_strstr(char *str, char *to_find);

void	ft_putstr(char *str);

int		ft_atoi(char c);

void	ft_double_2(char d, char u, char *dict)
{
	char	temp[3];
	char	temp2[2];

	temp[0] = d;
	temp[1] = '0';
	temp[2] = '\0';
	ft_putstr (ft_strstr(dict, temp));
	if (u != '0')
	{
		write (1, "-", 1);
		temp2[0] = u;
		temp2[1] = '\0';
		ft_putstr (ft_strstr(dict, temp2));
	}
}

void	ft_double_1(char d, char u, char *dict)
{
	char	temp[3];

	temp[0] = d;
	temp[1] = u;
	temp[2] = '\0';
	ft_putstr(ft_strstr(dict, temp));
}

void	ft_double_0(char u, char *dict)
{
	char	temp2[2];

	if (u != '0')
	{
		temp2[0] = u;
		temp2[1] = '\0';
		ft_putstr(ft_strstr(dict, temp2));
	}
}
