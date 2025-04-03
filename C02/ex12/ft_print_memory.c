/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:20:12 by nistanoj          #+#    #+#             */
/*   Updated: 2025/04/03 12:59:43 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_get_hex(unsigned long long nb, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && prev == 1)
		write(1, "0", 1);
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		write(1, (base + nb), 1);
	}
}

void	ft_print_addr(unsigned long long addr)
{
	char	*base;
	char	buffer[17];
	int		i;

	base = "0123456789abcdef";
	buffer[16] = '\0';
	i = 15;
	while (i >= 0)
	{
		buffer[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buffer, 16);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i < size)
		{
			ft_get_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
		{
			write(1, "  ", 2);
		}
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			write(1, ".", 1);
		else
			write(1, (c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	sendsize;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			sendsize = 16;
		else
			sendsize = size % 16;
		ft_print_addr((unsigned long long)c + (i * 16));
		write(1, ":", 1);
		ft_print_data(c + (i * 16), sendsize);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}
