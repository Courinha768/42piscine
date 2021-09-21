/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:40:55 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/19 21:50:15 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writer(int n)
{
	char	a[10];
	int		i;

	i = -1;
	while (n > 0)
	{
		i++;
		a[i] = '0' + n % 10;
		n = n / 10;
	}
	while (i >= 0)
	{
		ft_putchar(a[i]);
		i--;
	}
}

void	ft_putnbr(int n)
{
	int		i;

	i = -1;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		ft_writer(n);
	}
}
