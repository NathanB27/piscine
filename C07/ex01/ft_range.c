/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:53:27 by nboucher          #+#    #+#             */
/*   Updated: 2024/07/11 22:06:29 by nboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min ++;
		i ++;
	}
	return (range);
}

/*
#include <stdio.h>
int     main()
{
        int     *test;
        int i = 0;
        test = ft_range(9, 15);
        while (i < 7)
        {
                printf("%d", test[i]);
                i ++;
        }
        free (test);
        return 1;
}
*/
