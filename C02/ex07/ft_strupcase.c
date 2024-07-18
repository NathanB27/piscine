/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:37:23 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/30 10:40:17 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i ++;
	}
	return (str);
}
/*
#include <unistd.h>

char	*ft_strupcase(char *src);

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "AbCdEfG-Yz";
	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
*/
