/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:57:35 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/01 14:57:46 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i ++;
	}
	while (src[j])
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
#include <string.h>

	
int	main(void)
{
	char buffer1[] = "hddddadsadDdghg"; 


	printf("ci dessous test avec mon programme : ");
	
	
	
	
	printf("%s\n", ft_strcat( buffer1, " pgggggggggrmmgram"));
	return (0);
}
*/
