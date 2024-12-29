/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:00:45 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:13:20 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: upper-case character test
**
** DESCRIPTION:
** 		The isupper() function tests for any upper-case letter.
*/

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/*int main(void)
{
	printf("OG: %d\n", isupper('b'));
	printf("my: %d\n", ft_isupper('b'));
	printf("OG: %d\n", isupper('B'));
	printf("my: %d\n", ft_isupper('B'));
	printf("OG: %d\n", isupper(' '));
	printf("my: %d\n", ft_isupper(' '));
}*/