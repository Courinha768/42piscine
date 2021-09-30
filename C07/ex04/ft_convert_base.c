/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:34:54 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/30 12:09:25 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	space(char c, char *spaces);

int	base_tester(char *base);

int	nbr_tester(char *nbr, char *base);

int	idk(char *str, int	*k);

int	ft_nbrint(char *nbr, char *base_from, int c_base_f)
{
	int	j;
	int	i;
	int	*intarray;
	int	n;
	int	a[0];

	j = 0;
	intarray = (int *)malloc(sizeof(int) * ft_strlen(nbr));
	if (intarray == 0)
		return (0);
	i = idk(nbr, a) - 1;
	while (nbr[++i])
	{
		a[0] = -1;
		while (base_from[++a[0]])
			if (nbr[i] == base_from[a[0]])
				intarray[j++] = a[0];
	}
	j = 0;
	n = 0;
	while (j < ft_strlen(nbr) - idk(nbr, a))
		n = n * c_base_f + intarray[j++];
	return (n);
}

int	len(char *nbr, char *base_from, char *base_to)
{
	int	n;
	int	i;

	i = 0;
	n = ft_nbrint(nbr, base_from, ft_strlen(base_from));
	while (n > 0)
	{
		n = n / ft_strlen(base_to);
		i++;
	}
	return (i);
}

char	*converter(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		i;
	char	*res;
	int		k[0];

	res = (char *)malloc(sizeof(char) * (len(nbr, base_from, base_to) + 2));
	if (res == NULL)
		return (NULL);
	i = 0;
	n = ft_nbrint(nbr, base_from, ft_strlen(base_from));
	if (n == 0)
		res[i++] = base_to[0];
	while (n > 0)
	{
		res[i] = base_to[n % ft_strlen(base_to)];
		n = n / ft_strlen(base_to);
		i++;
	}
	idk(nbr, k);
	if (k[0] == 1 && ft_nbrint(nbr, base_from, ft_strlen(base_from)) != 0)
		res[i++] = '-';
	res[i] = '\0';
	return (res);
}

void	ft_reverse(char *str)
{
	int		j;
	int		i;
	char	a;

	j = -1;
	i = 0;
	while (str[i])
		i++;
	i--;
	while (++j <= i)
	{
		a = str[j];
		str[j] = str[i];
		str[i--] = a;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;

	if (base_tester(base_from) == 1)
		return ("\0");
	if (base_tester(base_to) == 1)
		return ("\0");
	if (nbr_tester(nbr, base_from) == 1)
		return ("\0");
	res = converter(nbr, base_from, base_to);
	ft_reverse(res);
	return (res);
}
