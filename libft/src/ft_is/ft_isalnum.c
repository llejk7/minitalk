/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:43:09 by krenken           #+#    #+#             */
/*   Updated: 2024/06/18 00:22:05 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: alphanumeric character test
**
** DESCRIPTION:
** 		The isalnum() function tests for any character for which isalpha(3) or
**	isdigit(3) is true.
*/

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

/*int main(void)
{
	printf("OG: %d\n", isalnum('A'));
	printf("my: %d\n", ft_isalnum('A'));
	printf("OG: %d\n", isalnum('*'));
	printf("my: %d\n", ft_isalnum('*'));
	printf("OG: %d\n", isalnum('1'));
	printf("my: %d\n", ft_isalnum('1'));
	printf("OG: %d\n", isalnum('%'));
	printf("my: %d\n", ft_isalnum('%'));
}*/