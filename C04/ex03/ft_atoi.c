/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:31:41 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/21 15:51:03 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char c, char *spaces)
{
	int	i;

	i = 0;
	while (spaces[i])
	{
		if (c == spaces[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	counter;
	int	nb;

	nb = 0;
	i = 0;
	counter = 0;
	while (space(str[i], "\t\n\v\f\r "))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (counter % 2 == 1)
		nb = -nb;
	return (nb);
}
