/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjell <kjell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:25:15 by krenken           #+#    #+#             */
/*   Updated: 2024/12/28 15:26:41 by kjell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../../inc/libft.h"

size_t	gnl_strlen(const char	*str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while ((str[i] != (char)c) && (str[i] != '\0'))
		i++;
	if (str[i] != (char)c)
		return (NULL);
	else
		return ((char *)&str[i]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	new_str = (char *)malloc(gnl_strlen((char *)s1) + gnl_strlen((char *)s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
