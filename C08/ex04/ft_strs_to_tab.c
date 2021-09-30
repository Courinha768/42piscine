/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:38:10 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/29 20:57:13 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * i + 1);
	if (dup == NULL)
		return (NULL);
	while (i >= 0)
	{
		dup[i] = src[i];
		i--;
	}
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*point;

	i = 0;
	point = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (point == NULL)
		return (NULL);
	while (i < ac)
	{
		point[i].size = ft_strlen(av[i]);
		point[i].str = av[i];
		point[i].copy = ft_strdup(av[i]);
		i++;
	}
	point[i].size = 0;
	point[i].str = 0;
	point[i].copy = 0;
	return (point);
}
