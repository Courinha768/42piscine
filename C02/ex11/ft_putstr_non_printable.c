/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:18:52 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/15 10:15:48 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	int		b;
	char	*a;

	a = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_putchar('\\');
			b = str[i] + '0' - '0';
			ft_putchar('0' + b / 16);
			j = str[i] % 16;
			ft_putchar(a[j]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

//int	main(void)
//{
//	char	test[] = "Hello  world \a";
//
//	ft_putstr_non_printable(test);
//}
