/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:44:04 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 18:57:02 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: output string to given file with newline
**
** DESCRIPTION:
** 		Outputs the string ’s’ to the given file descriptor, followed by a
**	newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*int main()
{
    int fd;
    
    // Test 1: Writing to stdout (fd 1)
    printf("Test 1: Writing to stdout\n");
    ft_putendl_fd("Hello, World!", 1);
    
    // Test 2: Writing to a file
    printf("Test 2: Writing to a file\n");
    fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    ft_putendl_fd("This is a test string in a file.", fd);
    close(fd);
	// Cleanup: Remove the test file
    remove("test.txt");
    
    return 0;
}*/