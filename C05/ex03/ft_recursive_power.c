/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:46:04 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/20 18:28:04 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		if (power == 1)
			return (nb);
		else
			nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	return (0);
}

/*int main (void)
{
	printf("%d", ft_recursive_power(-10, 9));
}*/
