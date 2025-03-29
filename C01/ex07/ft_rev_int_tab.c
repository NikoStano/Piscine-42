/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibegnoj <nibegnoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:21:27 by nibegnoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:21:27 by nibegnoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	beg;
	int	end;
	int	temp;

	beg = 0;
	end = size - 1;
	while (beg < end)
	{
		temp = tab[beg];
		tab[beg] = tab[end];
		tab[end] = temp;
		beg++;
		end--;
	}
}
