/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:26:34 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/08 17:35:29 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= (nb / i) && i < 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i ++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
