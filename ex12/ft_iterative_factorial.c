/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:56 by akilk             #+#    #+#             */
/*   Updated: 2021/10/28 17:35:57 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	i = nb;
	while (i-- > 1)
		nb *= i;
	return (nb);
}
