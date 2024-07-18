/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:57:51 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/13 11:46:21 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

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

int	total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size -1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len_total;
	char	*retour;

	if (size == 0)
	{
		retour = malloc(sizeof(char));
		retour[0] = '\0';
		return (retour);
	}
	len_total = total_len(size, strs, sep);
	retour = malloc(sizeof(char) * (len_total + 1));
	if (retour == NULL)
		return (NULL);
	i = 0;
	retour[0] = '\0';
	while (i < size)
	{
		ft_strcat(retour, strs[i]);
		if (i < (size - 1))
			ft_strcat(retour, sep);
		i ++;
	}
	return (retour);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *strs[6] = {"hello", "la", "7878787878787", "tu", "va", "bien"};
	char *sep = "";
	char *dest;
	dest = ft_strjoin(0, strs, sep);
	printf("%s\n", dest);
	return (0);
}
*/	
