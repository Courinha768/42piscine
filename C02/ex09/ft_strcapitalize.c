/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:41:23 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/14 15:54:23 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strdecapitalize(int i, char *str)
{
	if (str[i - 1] >= 48 && str[i - 1] <= 57)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
	if (str[i - 1] >= 65 && str[i - 1] <= 90)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
	if (str[i - 1] >= 97 && str[i - 1] <= 122)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		if ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		ft_strdecapitalize(i, str);
	}
	return (str);
}
