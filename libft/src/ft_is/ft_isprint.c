/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:13:41 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:10:32 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: printing character test (space character inclusive)
**
** DESCRIPTION:
** 		The isprint() function tests for any printing character, including space
**	(` ').
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main(void)
{
	printf("OG: %d\n", isprint('b'));
	printf("my: %d\n", ft_isprint('b'));
	printf("OG: %d\n", isprint('\0'));
	printf("my: %d\n", ft_isprint('\0'));
}*/