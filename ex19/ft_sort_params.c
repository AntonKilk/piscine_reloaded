/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:37:36 by akilk             #+#    #+#             */
/*   Updated: 2021/10/28 17:37:37 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (*s1 - *s2);
	return (0);
}

void	ft_sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if ((ft_strcmp(tab[i], tab[j])) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
		ft_putstr(tab[i++]);
}

int	main(int argc, char **argv)
{
	ft_sort(argv + 1, argc - 1);
	return (0);
}
