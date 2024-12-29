/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:15:13 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 16:40:54 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memmove()	- is used to copy a block of memory from a location to another;
 *	 			  other then ft_memcpy the data is stored in a buffer to 
 				  avoid loses for overlaping memory
 * *to			- A pointer to the memory location where
 				  the copied data will be stored
 * *from		- pointer to the memory location from where 
 				  the data is to be copied
 * size_t len	- The number of bytes to be copied
*/

void	*ft_memmove(void *to, const void *from, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = (unsigned char *)to;
	src = (unsigned char *)from;
	if (!to && !from)
		return (to);
	if (from < to)
		while (len--)
			dest[len] = src[len];
	else
		while (len--)
			*dest++ = *src++;
	return (to);
}

/*int main() {
    // Test cases
    char src1[] = "Hello, World!";
    char src2[] = "Hello, World!";
    size_t len = strlen(src1) + 1; // Including the null terminator

    // Allocate memory for destination arrays
    char *dst1 = malloc(len);
    char *dst2 = malloc(len);

    // Use ft_memmove
    ft_memmove(dst1, src1, len);

    // Use standard memmove for comparison
    memmove(dst2, src2, len);

    // Check if the two memory areas are the same
    if (memcmp(dst1, dst2, len) == 0) {
        printf("Test passed: memory areas are identical.\n");
    } else {
        printf("Test failed: memory areas differ.\n");
    }

    // Test for overlapping regions
    char overlap_src[] = "1234567890";
    ft_memmove(overlap_src + 4, overlap_src, 6);
    if (strcmp(overlap_src, "1234123456") == 0) {
        printf("Test passed: overlapping regions handled correctly.\n");
    } else {
        printf("Test failed: overlapping regions not handled correctly.\n");
    }

    // Check if the function handles NULL pointers correctly
    if (ft_memmove(NULL, NULL, len) == NULL) {
        printf("Test passed: NULL pointers handled correctly.\n");
    } else {
        printf("Test failed: NULL pointers not handled correctly.\n");
    }

    // Free allocated memory
    free(dst1);
    free(dst2);

    return 0;
}*/