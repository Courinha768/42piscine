/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:08:48 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/30 12:08:52 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dup;
	int	i;

	i = 0;
	dup = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (dup == NULL)
		return (-1);
	while (min < max)
	{
		dup[i] = min;
		min++;
		i++;
	}
	*range = dup;
	return (i);
}

/*int	main()
{
	int	i;
	int **a;

	i = 0;
	printf("%d", ft_ultimate_range(a, 2, 8));
}*/
