/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:16:54 by nistanoj          #+#    #+#             */
/*   Updated: 2025/04/03 05:23:08 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	majchar(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	minchar(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

void	char_tomin(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (majchar(str[i]) == 1)
			str[i] += 32;
		i++;
	}
}

char	otherchar(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	char_tomin(str);
	while (str[i])
	{
		if ((otherchar(str[i - 1])) && (minchar(str[i])))
			str[i] -= 32;
		i++;
	}
	if (minchar(str[0]))
		str[0] -= 32;
	return (str);
}
