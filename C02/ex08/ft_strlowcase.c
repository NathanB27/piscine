/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:50:34 by nboucher          #+#    #+#             */
/*   Updated: 2024/06/30 10:43:58 by nboucher         ###   ########.fr       */
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
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char uppercase[] = "ABCDEQRSTUVWXYZ";
	char *upr;
	upr = uppercase;

	char allcases[] = "abcdefWXYZ";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", uppercase);
	printf("%s\n", ft_strlowcase(upr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strlowcase(p_all));
	printf("Empty = %s\n-----\n", ft_strlowcase(p_emp));

}
*/
