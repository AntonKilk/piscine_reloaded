/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:37:42 by akilk             #+#    #+#             */
/*   Updated: 2021/10/28 17:37:42 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	size = 0;
	while (src[size])
		size++;
	dup = (char *)malloc(sizeof(char) * size + 1);
	if (dup == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
