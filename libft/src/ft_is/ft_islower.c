/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:57:24 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:09:18 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: lower-case character test
**
** DESCRIPTION:
** 		 The islower() function tests for any lower-case letters.
*/

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/*int main(void)
{
	printf("OG: %d\n", islower('b'));
	printf("my: %d\n", ft_islower('b'));
	printf("OG: %d\n", islower('A'));
	printf("my: %d\n", ft_islower('A'));
	printf("OG: %d\n", islower('\0'));
	printf("my: %d\n", ft_islower('\0'));
}*/