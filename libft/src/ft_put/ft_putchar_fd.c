/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:40:09 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 18:46:39 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <stdio.h>
** SYNOPSIS: output a character to given file
**
** DESCRIPTION:
** 		The fputc() function writes the character c (converted to an ``unsigned
**	char'') to the output stream pointed to by stream.
** 		[42 PDF] Outputs the character ’c’ to the given file descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
    int fd;
    
    // Test 1: Writing to stdout (fd 1)
    printf("Test 1: Writing to stdout\n");
    ft_putchar_fd('A', 1);
    printf("\n");
    
    // Test 2: Writing to a file
    printf("Test 2: Writing to a file\n");
    fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    ft_putchar_fd('B', fd);
    close(fd);
    
    // Cleanup: Remove the test file
    remove("test.txt");
    
    return 0;
}*/