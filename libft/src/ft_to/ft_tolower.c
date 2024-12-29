/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:53:01 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 12:38:05 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: upper case to lower case letter conversion
**
** DESCRIPTION:
** 		The tolower() function converts an upper-case letter to the
**	corresponding lower-case letter.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_tolower('C'));
	printf("%d\n", tolower('C'));
	printf("%d\n", ft_tolower('7'));
	printf("%d\n", tolower('7'));
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", tolower('A'));
}*/