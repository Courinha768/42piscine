/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:00:30 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/17 10:05:00 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		printf("\n");
	}
	return (0);
}
