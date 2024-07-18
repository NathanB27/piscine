/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:48:06 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/01 18:53:14 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}
/*

int	main(void)
{
	char	*str;

	str = "str";

#include <stdio.h>
	printf("%d\n", ft_strlen(str));
	return (0);
}
*/
