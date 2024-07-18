/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:57:50 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/29 13:53:31 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int	main()
{
	int	a;
	int	b;

	a = 11;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("resultat de la division %d\n", a);
        printf("resultat du reste de la division%d\n",b);
}
*/
