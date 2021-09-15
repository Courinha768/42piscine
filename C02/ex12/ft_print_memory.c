/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:15:59 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/14 19:08:58 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_hex(char *str, int j)
{
	char	*hex;
	int		b;
	char	c;

	hex = "0123456789abcdef";
	b = str[j] + '0' - '0';
	c = '0' + b / 16;
	write(1, &c, 1);
	b = str[j] % 16;
	write(1, &hex[b], 1);
}

void	print_hex_str(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i % 2 == 0)
		{
			write(1, " ", 1);
		}
		print_hex(str, i);
		i++;
	}
}

void	print_zeros(unsigned int adr)
{
	int	i;

	i = 16;
	while (adr != 0)
	{
		adr = adr / 16;
		i--;
	}
	while (i > 0)
	{
		write (1, "0", 1);
		i--;
	}
}

void	print_addr(unsigned int adr)
{
	int				i;
	char			*hex;
	int				a[16];
	unsigned int	adr2;

	adr2 = adr;
	hex = "0123456789abcdef";
	print_zeros(adr);
	i = -1;
	while (adr2 > 0)
	{
		i++;
		a[i] = adr2 % 16;
		adr2 = adr2 / 16;
	}
	while (i >= 0)
	{
		write(1, &hex[a[i]], 1);
		i--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	char			*str;
	unsigned int	adr;

	adr = (unsigned int)addr;
	str = (char *)addr;
	print_addr(adr);
	write(1, ":", 1);
	print_hex_str(str, (int)size);
	write(1, " ", 1);
	i = 0;
	while (i < (int)size)
	{
		if (str[i] < 32 || str[i] > 127)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return (addr);
}

//int main()
//{
//	char a[] = "Bonjour les \a amin";
//
//	ft_print_memory(a,17);
//}	
