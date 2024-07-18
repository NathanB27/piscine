/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:13:06 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/16 15:32:02 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	len_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || white_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (i);
}

int	convertion(char *str, char *base, int i)
{
	int	base_len;
	int	result;
	int	j;

	result = 0;
	base_len = len_base(base);
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				break ;
			j ++;
		}
		if (base[j] == '\0')
			break ;
		result = result * base_len + j;
		i ++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;

	if (len_base(base) < 2)
		return (0);
	i = 0;
	sign = 1;
	while (white_space(str[i]))
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	return (convertion(str, base, i) * sign);
}
