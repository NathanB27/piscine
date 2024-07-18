/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:13:02 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/15 16:13:11 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char str)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[str / 16]);
	ft_putchar(base[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i ++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("\t\t\t\t\t\t\t\t\t o\nlalalal");
	return (0);
} 
*/
