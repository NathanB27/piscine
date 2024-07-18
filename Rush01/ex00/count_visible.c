/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:20:19 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/07 19:31:25 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_vue0(int **plat, int pos, int plat_size)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (plat[i][pos] > max)
	{
		if (i < plat_size)
		{
			max = plat[i][pos];
			count ++;
		}
		i ++;
	}
	return (count);
}

int	count_vue1(int **plat, int pos, int plat_size)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < plat_size)
	{
		if (plat[plat_size - 1 - i][pos] > max)
		{
			max = plat[plat_size - 1 - i][pos];
			count ++;
		}
		i ++;
	}
	return (count);
}

int	count_vue2(int **plat, int pos, int plat_size)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < plat_size)
	{
		if (i < plat_size)
		{
			max = plat[i][pos];
			count ++;
		}
		i ++;
	}
	return (count);
}

int	count_vue3(int **plat, int pos, int plat_size)
{
	int	count;
	int	max;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < plat_size)
	{
		if (plat[pos][plat_size - 1 - i] > max)
		{
		max = plat[pos][plat_size - 1 - i];
		count ++;
		}
		i ++;
	}
	return (count);
}
