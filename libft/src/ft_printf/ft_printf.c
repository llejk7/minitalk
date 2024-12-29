/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:52:17 by krenken           #+#    #+#             */
/*   Updated: 2024/09/13 22:57:49 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_check_format(const char specifier, va_list ap)
{
	int	print_len;

	print_len = 0;
	if (specifier == 'c')
		print_len += ft_printchar(va_arg(ap, int));
	else if (specifier == 's')
		print_len += ft_specifier_s(va_arg(ap, char *));
	else if (specifier == 'p')
		print_len += ft_specifier_p(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		print_len += ft_specifier_d_and_i(va_arg(ap, int));
	else if (specifier == 'u')
		print_len += ft_specifier_u(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		print_len += ft_speficier_x(va_arg(ap, int));
	else if (specifier == 'X')
		print_len += ft_speficier_bx(va_arg(ap, unsigned int));
	else if (specifier == '%')
		return (write(1, "%", 1));
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_check_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

/*int main(void)
{
	ft_printf("%s", "was nun?""ft_printf output :\n");
	ft_printf("%c\n", 'd');
	ft_printf("sp%secifier %s\n", "Moin man!", "\0");
	printf("%c\n", 'd');
	printf("sp%secifier %s\n", "Moin man!", "\0");
	
	int a = 419;
	int c = 419;
	unsigned int b = 24381241;
	void *z = &a;
	
	printf("%p\n", z);
	ft_printf("%p\n", z);
	
	ft_printf("%d\n", -2147483648);
	ft_printf("%i\n", -2147483648);
	ft_printf("%d\n", 12);
	ft_printf("%i\n", 12);
	ft_printf("%u\n", b);
	ft_printf("%u\n", b);
	unsigned long u = 143;
	ft_printf("%x\n", u);
	ft_printf("%X\n", c);
	ft_printf("%%%x\n", "hallo");
	ft_printf("%x", LONG_MAX);
	
	return (0);

}*/