/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:42:11 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 18:56:49 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: output string to given file
**
** DESCRIPTION:
** 		Outputs the string ’s’ to the given file descriptor.
*/

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

/*int main()
{
    int fd;
    
    // Test 1: Writing to stdout (fd 1)
    printf("Test 1: Writing to stdout\n");
    ft_putstr_fd("Hello, World!\n", 1);
    
    // Test 2: Writing to a file
    printf("Test 2: Writing to a file\n");
    fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    ft_putstr_fd("test du alter chien.", fd);
    close(fd);
    
    // Cleanup: Remove the test file
    remove("test.txt");
    
    return 0;
}*/