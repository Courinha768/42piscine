/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:58:58 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/17 11:52:24 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char **argv)
{
	int	a;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		ft_putnbr_base(a, argv[2]);
	}
}
