/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 09:52:29 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/17 11:33:11 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_strlen(argv[1]));
		printf("\n");
		return (0);
	}
}
