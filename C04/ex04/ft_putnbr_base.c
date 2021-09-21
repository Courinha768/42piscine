/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:36:34 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 15:41:47 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	low(int nbr, char *base, int i)
{
	int	j;
	int	a[32];

	j = -1;
	while (nbr < 0)
	{
		j++;
		a[j] = -(nbr % i);
		nbr = nbr / i;
	}
	write(1, "-", 1);
	while (j >= 0)
	{
		write(1, &base[a[j]], 1);
		j--;
	}
}

void	print(int nbr, char *base, int i)
{
	int	j;
	int	a[32];

	j = -1;
	while (nbr > 0)
	{
		j++;
		a[j] = nbr % i;
		nbr = nbr / i;
	}
	while (j >= 0)
	{
		write(1, &base[a[j]], 1);
		j--;
	}
}

void	tester(int a, int counter, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (counter < 2)
		a = 1;
	while (base[j])
	{
		i = j + 1;
		while (base[i])
		{
			if (base[j] == base[i])
				a = 1;
			i++;
		}
		j++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			a = 1;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	counter;
	int	a;

	counter = 0;
	a = 0;
	while (base[counter])
		counter++;
	tester(a, counter, base);
	if (a == 0)
	{
		if (nbr == -2147483648)
			low(nbr, base, counter);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		print(nbr, base, counter);
	}
}
