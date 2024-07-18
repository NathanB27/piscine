/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:04:07 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/16 15:31:07 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	white_space(char c);
int	len_base(char *base);
int	convertion(char *str, char *base, int i);
int	ft_atoi_base(char *str, char *base);

void	display_nbr(char *res, char c)
{
	int	i;

	i = 0;
	while (res[i])
		i ++;
	res[i] = c;
}

void	recursiv(long int nbr, char *base, int base_len, char *res)
{
	if (nbr >= base_len)
	{
		recursiv(nbr / base_len, base, base_len, res);
		recursiv(nbr % base_len, base, base_len, res);
	}
	else
		display_nbr(res, base[nbr]);
}

void	savenbr_decimal(long int nbr, char *base, char *res)
{
	int	base_len;

	base_len = len_base(base);
	if (nbr < 0)
	{
		nbr = -nbr;
		display_nbr(res, '-');
	}
	return (recursiv(nbr, base, base_len, res));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_decimal;
	char	*res;

	if (len_base(base_to) < 2 || len_base(base_from) < 2)
		return (NULL);
	nb_decimal = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(char) * 36);
	if (res == NULL)
		return (NULL);
	savenbr_decimal(nb_decimal, base_to, res);
	return (res);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
		char	*res;

		if (ac == 4)
		{	
			res = ft_convert_base(av[1], av[2], av[3]);
			printf("%s\n", res);
		}
		free (res);
		return (0);
}
*/
