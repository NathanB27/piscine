/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:47:30 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/09 11:11:23 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 2;
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (ft_is_prime(nb) != 1)
		{
			nb ++;
		}
		return (nb);
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
