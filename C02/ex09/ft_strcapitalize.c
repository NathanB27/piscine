/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:58:00 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/15 16:17:33 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
		i ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i ++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                write(1, &str[i], 1);
                i ++;
        }
}


int		main()
{
	char c[] = "sggGGGGGGgutt, comment tu vas ?42
	mots quarante-deux; cinquante+et+un";
	
	ft_putstr(ft_strcapitalize(c));
	printf("\n");
	
	
}
*/
