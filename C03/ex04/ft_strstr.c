/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:59:54 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/15 13:45:57 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] == str[i] && to_find[i])
			{
				i ++;
			}
			if (!to_find[i])
				return (str);
		}
		str ++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
    char *chercher = "chef";
    char *phrases  = "bonjour chef comment ça va";

    char 


    char *res;
    res = ft_strstr(phrases, chercher);

    if (res == NULL)
        printf("le mot: %s, dans la phrase %s a p
	as été trouv", chercher, phrases);
    else
        printf("le mots à été trouvé : %s\n", chercher);
}
*/
