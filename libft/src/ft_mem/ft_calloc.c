/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:57:51 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:02:43 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SYNOPSIS: memory allocation
**
** DESCRIPTION:
** 		The calloc() function contiguously allocates enough space for nmemb
**	objects that are size bytes of memory each and returns a pointer to the
**	allocated memory. The allocated memory is filled with bytes of value
**	zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!(str))
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

/*int main() {
    size_t nmemb = 10;
    size_t size = sizeof(int);
    int *array = (int *)ft_calloc(nmemb, size);

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Check if all bytes are set to 0
    int success = 1;
    for (size_t i = 0; i < nmemb; i++) {
        if (array[i] != 0) {
            success = 0;
            break;
        }
    }

    // Print the result
    if (success) {
        printf("Test passed: All bytes are zero.\n");
    } else {
        printf("Test failed: Not all bytes are zero.\n");
    }

    // Free the allocated memory
    free(array);

    return 0;
}*/