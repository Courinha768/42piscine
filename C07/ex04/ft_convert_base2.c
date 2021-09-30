/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:14:40 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/29 17:12:45 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	space(char c, char *spaces)
{
	int	i;

	i = 0;
	while (spaces[i])
	{
		if (c == spaces[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int	idk(char *str, int *k)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (space(str[i], "\t\n\v\f\r "))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	k[0] = (counter % 2);
	return (i);
}

int	base_tester(char *base)
{
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = -1;
	counter = 0;
	while (base[counter])
		counter++;
	if (counter < 2)
		return (1);
	while (base[++j])
	{
		i = j + 1;
		while (base[i])
		{
			if (base[j] == base[i++])
				return (1);
		}
		if (!((base[j] >= '0' && base[j] <= '9') || (base[j] >= 'a' && base[j] \
						<= 'z') || (base[j] >= 'A' && base[j] <= 'Z')))
			return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	nbr_tester(char *nbr, char *base)
{
	int	i;
	int	j;
	int	a;
	int	k[0];

	i = idk(nbr, k);
	while (nbr[i])
	{
		j = 0;
		while (base[j])
		{
			a = 1;
			if (nbr[i] == base[j])
			{
				a = 0;
				break ;
			}
			j++;
		}
		if (a == 1)
			return (1);
		i++;
	}
	return (0);
}
