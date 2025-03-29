/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:17:28 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:17:28 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long	i;
	long	n;

	i = power;
	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 0)
	{
		n = n * nb;
		i--;
	}
	return (n);
}
