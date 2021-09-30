/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:08:13 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/30 12:09:47 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * i);
	if (dup == NULL)
		return (NULL);
	while (i >= 0)
	{
		dup[i] = src[i];
		i--;
	}
	return (dup);
}
/*
int	main()
{
	char	*a;

	a = "Hello World!";
	printf("%s", ft_strdup(a));
}*/
