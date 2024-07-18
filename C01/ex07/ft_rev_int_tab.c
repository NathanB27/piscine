/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:26:38 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/11 15:39:10 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, 9);
	while (i < 10)
	{
		printf("before ; %d\n", tab[i]);
		i ++;	
	}
	return (0);
}
*/
