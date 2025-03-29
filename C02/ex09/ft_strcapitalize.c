/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 00:21:03 by nistanoj          #+#    #+#             */
/*   Updated: 2025/03/29 00:21:03 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  majchar(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}

int  minchar(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

char  *upormin(char *strmin)
{
  int  i;

  i = 0;
  while (strmin[i])
  {
    if (majchar(strmin[i]) == 1)
      strmin[i] += 32;
    i++;
  }
  return (strmin);
}

char  otherchar(char c)
{
  if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
    return (1);
  else
    return (0);
}

char  *ft_strcapitalize(char *str)
{
  int  i;

  i = 1;
  upormin(str);
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
