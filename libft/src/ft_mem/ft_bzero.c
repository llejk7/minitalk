/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:38:57 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 14:59:17 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SYNOPSIS: write zeroes to a byte string
**
** DESCRIPTION:
** 		The bzero() function writes n zeroed bytes to the string s. If n is
**	zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len--)
		*str++ = 0;
}

/*int main(void)
{
	size_t len = 10;
	char *buffer = malloc(len);
	// fill buffer with non-zero values
	memset(buffer, 1, len);
	
	// call ft_bzero
	ft_bzero(buffer, len);

	// check if all bytes arre set to 0
	int success = 1;
	for (size_t i = 0; i < len; i++)
	{
		if (buffer[i] != 0)
		{
			success = 0;
			break;
		}
	}
	if (success)
		printf("All bytes are zero.\n");
	else
		printf("Not all bytes are zero");

	 // Free the allocated memory
    free(buffer);

    return 0;
}*/