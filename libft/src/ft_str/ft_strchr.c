/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:58:20 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 13:33:44 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
**
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.  The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the func-
**	tions locate the terminating `\0'.
*/

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while ((str[i] != (char)c) && (str[i] != '\0'))
		i++;
	if (str[i] != (char)c)
		return (NULL);
	else
		return ((char *)&str[i]);
}

/*int main(void)
{
	printf("%s\n", strchr("Hallo", 'o'));
	printf("%s\n", ft_strchr("Hallo", 'o'));
}*/