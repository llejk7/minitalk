/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:26:16 by krenken           #+#    #+#             */
/*   Updated: 2024/07/20 12:29:24 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: alphabetic character test
**
** DESCRIPTION:
** 		The isalpha() function tests for any character for which isupper(3) or
**	islower(3) is true.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main(void)
{
	printf("OG: %d\n", isalpha('Z'));
	printf("OG: %d\n", isalpha('A'));
	printf("my: %d\n", ft_isalpha('Z'));
	printf("OG: %d\n", isalpha('a'));
	printf("OG: %d\n", isalpha('f'));
	printf("my: %d\n", ft_isalpha('a'));
	printf("OG: %d\n", isalpha('%'));
	printf("my: %d\n", ft_isalpha('%'));
	printf("OG: %d\n", isalpha('7'));
	printf("my: %d\n", ft_isalpha(7));
	printf("OG: %d\n", isalpha('}'));
	printf("my: %d\n", ft_isalpha('}'));
}*/