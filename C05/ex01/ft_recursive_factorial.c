/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:50:33 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/20 18:28:32 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		if (nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(69));
}*/
