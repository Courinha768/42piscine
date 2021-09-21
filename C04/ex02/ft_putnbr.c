/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:06:14 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 15:39:13 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	a[10];
	int		i;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	i = -1;
	while (nb > 0)
	{
		i++;
		a[i] = '0' + nb % 10;
		nb = nb / 10;
	}
	while (i >= 0)
	{
		ft_putchar(a[i]);
		i--;
	}
}
