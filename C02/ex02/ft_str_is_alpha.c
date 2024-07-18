/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:09:44 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/30 10:56:55 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			return (1);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i ++;
		}		
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>


int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"OK":"Fail",
			ft_str_is_alpha("AByz")?"OK":"Fail",
			!ft_str_is_alpha("1")?"OK":"Fail",
			!ft_str_is_alpha(" ")?"OK":"Fail",
			!ft_str_is_alpha("\\")?"OK":"Fail",
			!ft_str_is_alpha("\n")?"OK":"Fail");
}
*/