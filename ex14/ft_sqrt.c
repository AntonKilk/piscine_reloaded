/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:37:05 by akilk             #+#    #+#             */
/*   Updated: 2021/10/28 17:37:07 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 0;
	sqrt = 0;
	while (sqrt <= nb)
	{
		if (sqrt == nb)
			return (i);
		i++;
		sqrt = i * i;
	}
	return (0);
}
