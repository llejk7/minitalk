/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:41:56 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:11:39 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: white-space character test
**
** DESCRIPTION:
** 		The isspace() function tests for the white-space characters.
*/

int	ft_isspace(int c)
{
	return (c == '\f' || c == '\n' || c == '\r' \
	|| c == '\t' || c == '\v' || c == ' ');
}

/*int main (void)
{
	printf("OG: %d\n", isspace('b'));
	printf("my: %d\n", ft_isspace('b'));
	printf("OG: %d\n", isspace(' '));
	printf("my: %d\n", ft_isspace(' '));
	printf("OG: %d\n", isspace('	'));
	printf("my: %d\n", ft_isspace('	'));
}*/