/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:41:32 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/30 12:08:11 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			return (1);
		}
		if (str[i] >= '0' && str[i] <= '9')
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
			ft_str_is_numeric("")?"OK":"Fail",
			!ft_str_is_numeric("AEvyz")?"OK":"Fail",
			ft_str_is_numeric("0123456789")?"OK":"Fail",
			!ft_str_is_numeric(" ")?"OK":"Fail",
			!ft_str_is_numeric("\\")?"OK":"Fail",
			!ft_str_is_numeric("\n")?"OK":"Fail");
}
*/
