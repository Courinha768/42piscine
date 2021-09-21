/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:49:48 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/20 18:28:40 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb > 0)
	{
		i = nb - 1;
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	return (0);
}

/*int	main(void)
{
	int nb = -1;

	printf("%d", ft_iterative_factorial(nb));
}*/
