/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:15:46 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/30 10:27:13 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Mustbe same \n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
}
*/
