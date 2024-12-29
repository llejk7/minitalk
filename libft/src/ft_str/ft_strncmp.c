/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:53:08 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 21:57:47 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare strings (size-bounded)
**
** DESCRIPTION:
** 		The strcmp() and strncmp() functions lexicographically compare the null-
**	terminated strings s1 and s2.
** 		The strncmp() function compares not more than n characters.  Because
**	strncmp() is designed for comparing strings rather than binary data,
**	characters that appear after a `\0' character are not compared.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int main(void)
{
	//equal
	printf("OG: %d\n", strncmp("Moin", "Moin", 5));
	printf("my: %d\n", ft_strncmp("Moin", "Moin", 5));
	//s1 bigger q
	printf("OG: %d\n", strncmp("H", "A", 5));
	printf("my: %d\n", ft_strncmp("H", "A", 5));
	//s1 smaller
	printf("OG: %d\n", strncmp("Moi", "Moin", 5));
	printf("my: %d\n", ft_strncmp("Moi", "Moin", 5));
	
}*/