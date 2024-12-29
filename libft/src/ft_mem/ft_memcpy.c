/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:52:04 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 13:53:24 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy memory area
**
** DESCRIPTION:
** 		The memcpy() function copies n bytes from memory area s2 to memory area
**	s1. If s1 and s2 overlap, behavior is undefined.  Applications in which
**	s1 and s2 might overlap should use memmove(3) instead.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int main() {
    // Test cases
    char src[] = "Hello, World!";
    size_t n = strlen(src) + 1; // Including the null terminator

    // Allocate memory for destination arrays
    char *dst1 = malloc(n);
    char *dst2 = malloc(n);

    // Use ft_memcpy
    ft_memcpy(dst1, src, n);

    // Use standard memcpy for comparison
    memcpy(dst2, src, n);

    // Check if the two memory areas are the same
    if (memcmp(dst1, dst2, n) == 0) {
        printf("Test passed: memory areas are identical.\n");
    } else {
        printf("Test failed: memory areas differ.\n");
    }

    // Check if the function handles NULL pointers correctly
    if (ft_memcpy(NULL, NULL, n) == NULL) {
        printf("Test passed: NULL pointers handled correctly.\n");
    } else {
        printf("Test failed: NULL pointers not handled correctly.\n");
    }

    // Free allocated memory
    free(dst1);
    free(dst2);

    return 0;
}*/