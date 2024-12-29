/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:11:08 by krenken           #+#    #+#             */
/*   Updated: 2024/09/13 22:58:31 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_specifier_u(unsigned int n)
{
	int	len;
	int	conv_num;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n > 9)
		len += ft_specifier_d_and_i(n / 10);
	conv_num = (n % 10) + '0';
	len += write(1, &conv_num, 1);
	return (len);
}
