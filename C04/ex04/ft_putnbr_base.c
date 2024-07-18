/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:07:29 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/17 17:37:31 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int i, char *base)
{
	write(1, &base[i], 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

int	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (ft_test_base(base))
	{
		if (nb < 0)
		{
			write(1, &"-", 1);
			nb = -nb;
		}
		if (nb >= ft_strlen(base))
		{	
			ft_putnbr_base(nb / ft_strlen(base), base);
			nb %= ft_strlen(base);
		}
		if (nb <= ft_strlen(base) && nb >= 0)
			ft_putchar(nb, base);
	}
}
/*
#include <stdlib.h>

int	main(int ac, char **ag)
{
	if (ac == 3)
		ft_putnbr_base (atoi(ag[1]), ag[2]);
	return (0);
}
*/
