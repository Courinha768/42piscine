/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:00:44 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 20:38:04 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	tester(int counter, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (counter < 2)
		return (1);
	while (base[j])
	{
		i = j + 1;
		while (base[i])
		{
			if (base[j] == base[i] || base[i] == '-' || base[i] == '+')
				return (1);
			if (base[i] == ' ')
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	ft_space(char c, char *spaces)
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

int	ft_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		else
			i++;
	}
	return (-1);
}

int	char_a(int *a, char *str, char *base, int *k)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	j = 0;
	counter = 0;
	while (ft_space(str[i], "\t\n\v\f\r "))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	if (ft_base(str[i], base) == -1)
		return (-1);
	while (ft_base(str[i], base) != -1)
	{
		a[j] = ft_base(str[i], base);
		i++;
		j++;
	}
	k[0] = j;
	return (counter);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a[32];
	int	nb;
	int	i;
	int	j;
	int	k[1];

	nb = 0;
	i = -1;
	j = 1;
	while (base[j])
		j++;
	if (tester(j, base) == 1 || char_a(a, str, base, k) == -1)
		return (0);
	while (i++ < 32)
		a[i] = 0;
	i = 0;
	char_a(a, str, base, k);
	while (i < k[0])
	{
		nb = nb * j + a[i];
		i++;
	}
	if (char_a(a, str, base, k) % 2 == 1)
		nb = -nb;
	return (nb);
}
