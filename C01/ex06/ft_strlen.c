/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:00:04 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/29 14:00:30 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}
/*
#include <stdio.h>

int	main()
{

	printf("%d\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"));
	return (0);
}
*/
