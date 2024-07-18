/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:07:55 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/05 10:13:01 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * (ft_recursive_factorial(nb - 1)));
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}
*/
