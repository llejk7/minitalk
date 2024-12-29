/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:30:43 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 16:44:16 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memset()	- function writes n bytes of value c (converted to an
**				  unsigned char) to the string s.
** *s 			- starting address of memory to be filled
** int c		- Value to be filled - but it is converted to an unsigned char
** size_t len	- Number of bytes to be filled starting from *s to be filled
*/

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len --)
		*str++ = (unsigned char)c;
	return (s);
}

/*int main() {
    // Test case setup
    size_t len = 10;
    int set_char = 'A';

    // Allocate memory for the test
    char *ft_memset_test = malloc(len);
    char *std_memset_test = malloc(len);

    // Use ft_memset
    ft_memset(ft_memset_test, set_char, len);

    // Use standard memset for comparison
    memset(std_memset_test, set_char, len);

    // Check if the memory areas are the same
    if (memcmp(ft_memset_test, std_memset_test, len) == 0) {
        printf("Test passed: memory areas are identical.\n");
    } else {
        printf("Test failed: memory areas differ.\n");
    }

    // Print the contents for visual verification
    printf("ft_memset result: ");
    for (size_t i = 0; i < len; i++) {
        printf("%c", ft_memset_test[i]);
    }
    printf("\n");

    printf("std_memset result: ");
    for (size_t i = 0; i < len; i++) {
        printf("%c", std_memset_test[i]);
    }
    printf("\n");

    // Free allocated memory
    free(ft_memset_test);
    free(std_memset_test);

    return 0;
}*/