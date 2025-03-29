/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:11:19 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:11:19 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    int i;
    char    *str1;
    int size;

    size = ft_strlen(str);
    str1 = malloc(sizeof(char) * size + 1);
    i = 0;
    while (i < size)
    {
        str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    return (str1);
}
