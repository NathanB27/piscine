/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:23:39 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/08 18:18:57 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i++;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)	
printf("test de iterative factorielle:%d\n",ft
_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/
