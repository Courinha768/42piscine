/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:09:04 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/30 12:09:08 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	counter;
	int	s;

	s = 0;
	i = 0;
	counter = 0;
	while (sep[s])
		s++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		counter = counter + j + s;
		i++;
	}
	counter = counter - s;
	return (counter);
}

char	*ft_create(char **strs, char *sep, int size, char *array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j])
			array[k++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < (size - 1))
			array[k++] = sep[j];
		i++;
	}
	array[k] = '\0';
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	array = (char *)malloc(sizeof(char) * (ft_len(size, strs, sep) + 1));
	if (array == NULL)
		return (NULL);
	array = ft_create(strs, sep, size, array);
	return (array);
}
/*
int	main()
{
	char	*a[3];

	a[0] = "Hello";
	a[1] = "World";
	a[2] = "!";
	printf("%s", ft_strjoin(3, a, " "));
}*/
