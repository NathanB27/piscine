/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:10:43 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/30 10:32:18 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			return (1);
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_uppercase("")?"OK":"Fail",
			ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
			!ft_str_is_uppercase("ABCDEFxyz")?"OK":"Fail",
			!ft_str_is_uppercase("0123456789")?"OK":"Fail",
			!ft_str_is_uppercase(" ")?"OK":"Fail",
			!ft_str_is_uppercase("\\")?"OK":"Fail",
			!ft_str_is_uppercase("\n")?"OK":"Fail");
}
*/
