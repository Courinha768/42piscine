/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:44:54 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/27 19:29:21 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	ft_special_strleng(char *str, int k);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char c)
{
	int	nbr;

	nbr = c - 48;
	return (nbr);
}

char	*ft_str(char *str, int i, int j)
{
	char	*temp;

	i = i + 1;
	while (str[i] == 32 || str[i] == 58)
		i++;
	j = 0;
	while (str[i + j] > 31 && str[i + j] < 127)
		j++;
	temp = (char *)malloc(sizeof(char) * (j + 1));
	if (temp == NULL)
		return (NULL);
	j = 0;
	while (str[i] != '\n')
	{
		temp[j] = str[i];
		j++;
		i++;
	}
	temp[j] = '\0';
	return (temp);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (ft_str(str, i, j));
			}
			j++;
			i++;
		}
		i++;
	}
	return (0);
}
