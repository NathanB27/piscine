/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:41 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/01 14:56:00 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i ++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char buffer[]="allocation";

	printf("test concatenation : %s\n", ft_strncat(buffer, "chomage  ", 25));
	return (0);
}
*/
