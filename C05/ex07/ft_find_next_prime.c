/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:39:43 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 15:29:10 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (1)
	{
		if (i * i >= (unsigned int)nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	if (nb <= 2)
		return (2);
	if (nb == 3)
		return (3);
	while (1)
	{
		n = 3;
		while (1)
		{
			if (nb % 2 == 0)
				break;
			if (nb % n == 0)
				break ;
			n += 2;
			if (n > ft_sqrt(nb))
				return (nb);
		}
		nb++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int	index = 1;
	while (index < ac)
	{
			printf("Nb: %s | Next Prime: %d\n", av[index], ft_find_next_prime(atoi(av[index])));
			index++;
	}
}
