/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:41:34 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/27 19:29:36 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_start(char *dict, char *str);

int	checkarg(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			cont++;
		i++;
	}
	if (i == cont)
		return (1);
	else
		return (0);
}

int	argc2(char const **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open ("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write (1, "Dict Error\n", 11);
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_start(buf, (char *)argv[1]);
	return (fd);
}

int	argc3(char const **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (1, "Dict Error\n", 11);
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_start(buf, (char *)argv[2]);
	return (fd);
}
