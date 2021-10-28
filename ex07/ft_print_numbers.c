/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:07 by akilk             #+#    #+#             */
/*   Updated: 2021/10/28 17:35:10 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
	{
		ft_putchar(ch);
		ch++;
	}
}
