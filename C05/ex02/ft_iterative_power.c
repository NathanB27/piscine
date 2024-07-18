/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:35:55 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/13 11:09:13 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power - 1)
	{
		nb *= i;
		power --;
	}
	return (nb);
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

