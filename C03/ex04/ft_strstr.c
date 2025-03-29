/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:10:17 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:10:17 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char  *ft_strstr(char *str, char *to_find)
{
  int  i;
  int  j;
  int  check;

  i = 0;
  if (to_find[0] == '\0')
    return (str);
  while (str[i])
  {
    j = 0;
    check = 1;
    while (to_find[j])
    {
      if (str[i + j] != to_find[j])
        check = 0;
    j++;
    }
    if (check == 1)
      return (&str[i]);
    i++;
    }
  return (0);
}
