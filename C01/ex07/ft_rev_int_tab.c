/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:07:10 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/11 22:40:42 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;

	j = 0;
	i = size - 1;
	while (j < size / 2)
	{
		a = tab[j];
		tab[j] = tab[i];
		tab[i] = a;
		j++;
		i--;
	}
}

//int main(void)
//{
//	int a[5] = {1 ,2, 3, 4, 5};
//	int b = 5;
//	int i;
//	
//	ft_rev_int_tab(a, b);
//	i = 0;
//	while (i < 5)
//	{
//		printf("%d ", a[i]);
//		i++;
//	}
//}
