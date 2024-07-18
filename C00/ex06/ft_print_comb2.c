/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:50:28 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/09 08:14:23 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			ft_putnbr(a);
			ft_putchar(' ');
			ft_putnbr(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b ++;
		}
		a ++;
		b = a + 1;
	}
}
/*
int main()
{
	ft_print_comb2();
	return (0);
}
*/
