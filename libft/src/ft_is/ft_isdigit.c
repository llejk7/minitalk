/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:47:32 by krenken           #+#    #+#             */
/*   Updated: 2024/06/17 23:27:16 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: decimal-digit character test
**
** DESCRIPTION:
** 		The isdigit() function tests for a decimal digit character.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*int main(void)
{
	printf("OG: %d\n", isdigit('9'));
	printf("my: %d\n", ft_isdigit('A'));
	printf("OG: %d\n", isdigit('2'));
	printf("my: %d\n", ft_isdigit('1'));
	printf("OG: %d\n", isdigit('{'));
	printf("my: %d\n", ft_isdigit('{'));
	printf("OG: %d\n", isdigit('.'));
	printf("my: %d\n", ft_isdigit('.'));
}*/