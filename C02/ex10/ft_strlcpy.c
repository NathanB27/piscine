/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:43:44 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/15 18:09:07 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
		i ++;
	if (size == 0)
		return (i);
	while (src[j] && j < size - 1)
	{
		dest[j] = src[j];
		j ++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int		main()
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Mustbe same \n%s\n%d\n%s\n", src, ft_strlcpy(dest, src, 10), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strlcpy(dest1, src1, 5);
}
*/
