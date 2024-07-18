/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:52:43 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/11 14:36:21 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	j;

	tmp = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				j = 0;
			}
			else
				j ++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int i = 0;
	int tab[10] = {9,8,7,6,5,4,3,2,1,0};
	ft_sort_int_tab(tab, 10);
	while (i < 10)
	{
		printf("after : %d\n", tab[i]);
		i ++;	
	}
}
*/
