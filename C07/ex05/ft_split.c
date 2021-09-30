/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:40:04 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/28 18:54:09 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	set(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	define_array(char *str, char *charset, char *array, int i)
{
	int	j;

	j = 0;
	while (set(str[i], charset) == 1 && str[i])
	{
		array[j++] = str[i++];
	}
	array[j] = '\0';
	return (i);
}

typedef struct s_stock
{
	int	i;
	int	j;
	int	k;
	int	a;
}		t_stock;

char	**ft_split(char *str, char *charset)
{
	char	**array;
	t_stock	stu;

	array = (char **)malloc(sizeof(char) * 100000);
	if (array == NULL)
		return (NULL);
	stu.i = 0;
	stu.k = 0;
	while (str[stu.i])
	{
		stu.a = stu.i;
		stu.j = 0;
		if (set(str[stu.i], charset) == 1)
		{
			while (set(str[stu.a], charset) == 1 && str[stu.a++])
				stu.j++;
			array[stu.k] = (char *)malloc(sizeof(char) * (stu.j + 2));
			if (array[stu.k] == NULL)
				return (NULL);
			stu.i = define_array(str, charset, array[stu.k], stu.i);
			stu.k++;
		}
		stu.i++;
	}
	return (array);
}
