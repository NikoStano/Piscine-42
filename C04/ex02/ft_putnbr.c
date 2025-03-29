/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:06:57 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:06:57 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	
	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar("-");
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

