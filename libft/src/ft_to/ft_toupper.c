/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:37:43 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 12:38:38 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: lower case to upper case letter conversion
**
** DESCRIPTION:
** 		The toupper() function converts a lower-case letter to the corresponding
**	upper-case letter.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_toupper('c'));
	printf("%d\n", toupper('c'));
	printf("%d\n", ft_toupper('7'));
	printf("%d\n", toupper('7'));
	printf("%d\n", ft_toupper('A'));
	printf("%d\n", toupper('A'));
}*/