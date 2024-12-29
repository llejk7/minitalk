/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:18:33 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 22:00:19 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (last occurence)
**
** DESCRIPTION:
** 		The strrchr() function locates the last occurrence of c (converted to a
**	char) in the string s.  If c is `\0', strrchr() locates the terminating
**	`\0'.
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&(str[i]));
		i--;
	}
	return (NULL);
}

/*int main(void)
{
	printf("%s\n", strrchr("kjellrenkenllejk", 'r'));
	printf("%s\n", ft_strrchr("kjellrenkenllejk", 'r'));
}*/