/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:47:04 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 18:37:28 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: output integer to given file
**
** DESCRIPTION:
** 		Outputs the integer ’n’ to the given file descriptor.
*/

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}

/*int main()
{
    printf("Test 1: Positive number\n");
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    printf("Test 2: Negative number\n");
    ft_putnbr_fd(-6789, 1);
    ft_putchar_fd('\n', 1);

    printf("Test 3: Zero\n");
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    printf("Test 4: INT_MAX\n");
    ft_putnbr_fd(INT_MAX, 1);
    ft_putchar_fd('\n', 1);

    printf("Test 5: INT_MIN\n");
    ft_putnbr_fd(INT_MIN, 1);
    ft_putchar_fd('\n', 1);

    return 0;
}*/