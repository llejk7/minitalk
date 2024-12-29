/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:30:38 by krenken           #+#    #+#             */
/*   Updated: 2024/07/25 12:50:31 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <stdio.h>
** SYNOPSIS: output a character to standard output
**
** DESCRIPTION:
** 		The fputc() function writes the character c (converted to an ``unsigned
**	char'') to the output stream pointed to by stream.
** 		[42 PDF] Outputs the character ’c’ to the standard output.
*/

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
