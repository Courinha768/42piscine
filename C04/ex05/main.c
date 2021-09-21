/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:09:36 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/17 11:34:25 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
