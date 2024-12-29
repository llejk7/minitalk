/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_d_and_i.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:05:16 by krenken           #+#    #+#             */
/*   Updated: 2024/09/13 23:08:26 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ftt_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_specifier_d_and_i(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ftt_putstr(num);
	free(num);
	return (len);
}
