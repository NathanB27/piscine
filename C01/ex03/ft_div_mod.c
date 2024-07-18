/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:39:19 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/29 13:52:20 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int test1;
	int test2;

	ft_div_mod(11, 5, &test1, &test2);
	printf("a divise b %d\n le modulo est %d", test1, test2);
}
*/
