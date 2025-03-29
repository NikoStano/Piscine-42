/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:29:35 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:29:35 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (tab[i] >= tab[i + 1])
			return ;
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n || tab[n - 1] != 9)
		write(1, ", ", 2);
}

void	ft_find_comb(int *tab, int n, int index)
{
	if (index == n)
	{
		ft_print_number(tab, n);
		return ;
	}
	if (index == 0)
		tab[index] = 0;
	else
		tab[index] = tab[index - 1] + 1;
	while (tab[index] <= 9)
	{
		ft_find_comb(tab, n, index + 1);
		tab[index]++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n > 0 && n < 10)
		ft_find_comb(tab, n, 0);
}
