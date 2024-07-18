/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:18:53 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/14 19:09:55 by nboucher         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	taille_dest;
	unsigned int	taille_src;
	unsigned int	i;
	unsigned int	j;

	taille_dest = ft_strlen(dest);
	taille_src = ft_strlen(src);
	i = 0;
	j = taille_dest;
	if (size <= taille_dest)
		return (taille_src + size);
	while (i < size -1 - taille_dest && src[i])
	{	
		dest[j] = src[i];
		j ++;
		i ++;
	}
	dest[j] = '\0';
	return (taille_dest + taille_src);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
		
	printf("real fuction %zu ; fake function %d \n",
	strlcat(s1a,s2a, 4) , ft_strlcat(s1a, s2a, 4));
	
	printf("real fuction %zu ; fake function %d \n", 
	strlcat(s5a,s2a, 6) , ft_strlcat(s5a, s2a, 6));

	printf("%d\n", ft_strlcat(s5a, s6a, 10));
	
	printf("%d\n", ft_strlcat(s7a, s8a, 0));
}
*/
