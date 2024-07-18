/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:42:33 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/05 10:47:53 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{		
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i ++;
		}
	}
	return (0);
}
