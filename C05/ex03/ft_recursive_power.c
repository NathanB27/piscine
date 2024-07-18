/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:57:13 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/10 09:15:06 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb *= ft_recursive_power(nb, power - 1));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
