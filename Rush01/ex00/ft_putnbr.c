/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:41:21 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/07 19:34:12 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	int_longueur(int n)
{
	int	longueur;

	longueur = 0;
	while (n > 0)
	{
		n /= 10;
		longueur ++;
	}
	return (longueur);
}

void	ft_putnbr(int nb)
{
	int	longueur;
	int	i;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb == 0)
		ft_putchar('0');
	longueur = int_longueur(nb);
	i = 0;
	while (i < longueur)
	{
		ft_putchar(recup_val(nb, longueur - i - 1) + '0');
		i ++;
	}
}
