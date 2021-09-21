/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:32:02 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/20 18:28:14 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		while (power > 1)
		{
			n = n * nb;
			power--;
		}
		return (n);
	}
	else
		return (0);
}

/*int main()
{
	printf("%d", ft_iterative_power(4, 3));
}*/
