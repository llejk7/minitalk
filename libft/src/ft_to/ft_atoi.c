/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:16:19 by krenken           #+#    #+#             */
/*   Updated: 2024/07/21 14:45:18 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** SYNOPSIS: convert ASCII string to integer
**
** DESCRIPTION:
** 		The atoi() function converts the initial portion of the string pointed
**	to by str to int representation.
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		i = i * 10 + *str++ - '0';
	return (i * sign);
}

/*int main(void)
{
	printf("%d\n", atoi("    -9444000"));
	printf("%d\n", ft_atoi("  -9444000"));
}*/