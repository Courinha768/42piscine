/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:09:35 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 15:32:45 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;
	int	a;

	a = nb / 2;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	n = 3;
	while (n <= a)
	{
		if (nb % n == 0)
			return (0);
		else
			n = n + 2;
	}
	return (1);
}

int	main(void)
{
	printf("%d ", ft_is_prime(7));
}
