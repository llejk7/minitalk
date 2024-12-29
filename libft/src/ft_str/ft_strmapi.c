/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:37:03 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 18:25:59 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: create new string from modifying string with specified function
**
** DESCRIPTION:
** 		Applies the function ’f’ to each character of the string ’s’ to create
**	a new string (with malloc(3)) resulting from successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen((char *)s);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

/*char to_uppercase(unsigned int i, char c) 
{
	(void) i;
    return ft_toupper(c);
}
	
int main(void)
{
	const char *str = "Moin, man.";

	char *result = ft_strmapi(str, to_uppercase);
    if (result) {
        printf("Original string: %s\n", str);
        printf("Transformed string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/