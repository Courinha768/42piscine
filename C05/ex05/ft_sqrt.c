/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:28:09 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 15:32:19 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (1)
	{
		if (i * i > nb)
			return (0);
		else if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main (void)
{
	printf("%d", ft_sqrt(2250000));
}
