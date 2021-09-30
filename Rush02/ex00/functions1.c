/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:40:10 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/27 19:29:14 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUF_SIZE 4096

char	*ft_strstr(char *str, char *to_find);

void	ft_putstr(char *str);

void	ft_start(char *dict, char *str);

int		argc2(char const **argv);

int		argc3(char const **argv);

char	*ft_findsuf(int counter, char *dict)
{
	int		i;
	char	*temp;
	char	*str;

	if (counter > 3)
	{
		str = (char *)malloc(sizeof(char) * (counter + 1));
		if (str == NULL)
			return (NULL);
		i = 1;
		str[0] = '1';
		while (i < counter - ((counter - 1) % 3))
			str[i++] = '0';
		str[i] = '\0';
		temp = ft_strstr(dict, str);
		free (str);
		return (temp);
	}
	return ("\0");
}

int	ft_special_strleng(char *str, int k)
{
	int	counter;

	counter = 0;
	while (str[k++])
		counter++;
	return (counter);
}

int	zero(char *str, char *dict)
{
	int	i;

	i = 0;
	while (str[i] == '0')
		if (str[1 + i++] == '\0')
			ft_putstr(ft_strstr(dict, "0\0"));
	return (i);
}

char	*idk(char *str, int i)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * 4);
	if (temp == NULL)
		return (NULL);
	temp[0] = str[i - 1];
	temp[1] = str[i];
	temp[2] = str[i + 1];
	temp[3] = '\0';
	return (temp);
}

void	fnormi(int argc, char const **argv)
{
	if (argc == 2)
	{
		if (close(argc2(argv)) == -1)
			write (1, "Dict Error\n", 12);
	}
	else if (argc == 3)
	{
		if (close(argc3(argv)) == -1)
			write (1, "Dict Error\n", 12);
	}
}
