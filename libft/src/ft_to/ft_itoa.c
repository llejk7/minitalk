/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:14:36 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 15:14:25 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: convert integer to ASCII string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a string representing the
**	integer received as an argument. Negative numbers must be handled.
*/

static int	calc_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	nbr;

	size = calc_size(n);
	nbr = n;
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (!nbr)
		str[0] = '0';
	str[size--] = 0;
	while (nbr)
	{
		str[size--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

/*int main(void)
{
	printf("%s\n", ft_itoa(10000));
	printf("%s\n", ft_itoa(-10000));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(00100));
}*/