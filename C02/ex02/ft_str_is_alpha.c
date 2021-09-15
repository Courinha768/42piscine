/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:43:28 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/13 19:53:36 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
		return (1);
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
		return (1);
	}
	return (1);
}
