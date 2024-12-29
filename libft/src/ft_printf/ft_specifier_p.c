/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:51:09 by krenken           #+#    #+#             */
/*   Updated: 2024/09/13 22:58:21 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_dec_to_hex(unsigned long c)
{
	int		len;
	char	*small_hex;

	small_hex = "0123456789abcdef";
	len = 0;
	if (c > 15)
	{
		len += ft_dec_to_hex(c / 16);
	}
	len += ft_printchar(small_hex[c % 16]);
	return (len);
}

int	ft_specifier_p(void *adress)
{
	int	len;

	len = 0;
	if (adress == 0)
		return (write(1, "(nil)", 5));
	else
	{
		len += write(1, "0x", 2);
		len += ft_dec_to_hex((unsigned long)adress);
	}
	return (len);
}

/*int main(void)
{
	int a = 419;
	void *z = &a;
	
	printf("%p\n", z);
	ft_specifier_p(z);
	
	return (0);
}*/