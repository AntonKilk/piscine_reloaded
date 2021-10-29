/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:37:47 by akilk             #+#    #+#             */
/*   Updated: 2021/10/29 13:02:35 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
