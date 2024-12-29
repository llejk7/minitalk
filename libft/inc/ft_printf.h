/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:14:00 by krenken           #+#    #+#             */
/*   Updated: 2024/09/12 23:04:08 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include "../inc/libft.h"
# include "limits.h"

int			ft_printchar(int c);
int			ft_dec_to_hex(unsigned long c);
void		ft_putnbr(int n);
int			ft_specifier_d_and_i(int n);
int			ft_specifier_s(char *str);
int			ft_specifier_p(void *adress);
int			ft_specifier_u(unsigned int n);
int			ft_speficier_bx(unsigned int num);
int			ft_speficier_x(unsigned int num);
int			ft_printf(const char *format, ...);

#endif