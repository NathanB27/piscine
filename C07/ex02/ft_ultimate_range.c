/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:45:41 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/13 11:51:39 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof (int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min ++;
		i ++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	int *test;
	int i;
	
	i = ft_ultimate_range(&test, 10, 100);
	printf("size : %d\n", i);
	i = 0;
	while (i < 90)
	{
		printf("%d\n", test[i]);
		i ++;
	}
	free (test);
	return (0);
}
*/
