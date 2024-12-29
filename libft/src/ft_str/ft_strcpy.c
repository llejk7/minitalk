/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:59:49 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 13:47:39 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy strings
**
** DESCRIPTION:
** 		The stpcpy() and strcpy() functions copy the string s2 to s1 (including
**	the terminating `\0' character).
*/

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int main(void)
{
	char *s1 = "hallo";
	char *s2 = malloc(ft_strlen(s1 + 1) * sizeof(char));
	if (s2 == NULL)
		return 1;
	char *result;

	result = ft_strcpy(s2, s1);
	ft_putstr_fd(result, 1);

	free(s2);
}*/