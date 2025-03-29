/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:26:14 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:26:14 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_mod(int first, int second)
{
	ft_putchar(first / 10 + '0');
	ft_putchar(first % 10 + '0');
	ft_putchar(' ');
	ft_putchar(second / 10 + '0');
	ft_putchar(second % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_mod(i, j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
