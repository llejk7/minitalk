/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:03:53 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:07:11 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: test for ASCII character
**
** DESCRIPTION:
** 		The isascii() function tests for an ASCII character, which is any
**	character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main(void)
{
	printf("OG: %d\n", isascii('Z'));
	printf("my: %d\n", ft_isascii('Z'));
	
	printf("OG: %d\n", isascii('a'));
	printf("my: %d\n", ft_isascii('a'));
	
	printf("OG: %d\n", isascii('\0'));
	printf("my: %d\n", ft_isascii('\0'));
}*/