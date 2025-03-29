/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:51:38 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:51:38 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_tab_len(int size, char **strs, char *sep)
{
	int	tab_len;
	int	i;

	tab_len = 0;
	i = 0;
	while (i < size)
	{
		tab_len += ft_strlen(strs[i]);
		i++;
	}
	tab_len += (size - 1) * ft_strlen(sep);
	return (tab_len);
}

void	ft_strcat(char *dest, char *src, int *pos)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[*pos] = src[j];
		(*pos)++;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*join;

	if (size == 0)
		return ((char *)malloc(1));
	join = (char *)malloc(ft_tab_len(size, strs, sep) + 1);
	if (!join)
		return (NULL);
	j = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i], &j);
		if (i < size - 1)
			ft_strcat(join, sep, &j);
		i++;
	}
	join[j] = '\0';
	return (join);
}
