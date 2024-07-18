/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:26:49 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/16 18:35:41 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_in_charset(char str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (str == sep[i])
			return (1);
		i ++;
	}
	return (0);
}

char	add_str(char *str, int start, int end)
{
	char	*res;
	int 	i;

	res = malloc(sizeof(char ) * ((end - start) + 1));
	i = 0;
	while (i < end - start)
	{
		res[i] = str[debut + i]
		i ++;
	}
	res[i] = '\0';
	return (res);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_in_charset(str[i]))
		{
			while (!is_in_charset(str[i]))
				i ++;
			count ++;
		}
		else
			i ++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char **res
	int	start;
	int 	end;
	int	i;
	int	tab;
	
	tab = -1;
	res = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		if(is_in_charset(str[i]))
			i ++;
		
	
	
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", *ft_split(av[1], av[2]));
	return (0);
}
