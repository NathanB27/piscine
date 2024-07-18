/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:42:15 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/29 13:50:43 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	older;

	older = *a;
	*a = *b;
	*b = older;
}
/*
#include <stdio.h>
int main(void)
{
	int	a = 3;
	int	b = 2;

	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}
*/
