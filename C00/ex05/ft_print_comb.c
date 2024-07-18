/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:02:29 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/09 08:19:54 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print(a, b, c);
				c ++;
			}
			b ++;
		}
		a ++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return (0);
}
*/
