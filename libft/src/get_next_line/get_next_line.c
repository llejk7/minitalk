/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjell <kjell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:24:53 by krenken           #+#    #+#             */
/*   Updated: 2024/12/28 15:23:59 by kjell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../../inc/libft.h"

//	Reads from the file descriptor into a buffer and appends the data to the
//	stash until a newline is found or EOF is reached
char	*read_and_append(int fd, char *buffer, char *stash)
{
	char	*temp;
	ssize_t	bytes_read;

	bytes_read = 1;
	while ((stash == NULL || !ft_strchr(stash, '\n')) && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		buffer[bytes_read] = '\0';
		temp = stash;
		stash = ft_strjoin(stash, buffer);
		free(temp);
		if (!stash)
			return (NULL);
	}
	return (stash);
}

// Extracts a complete line from the stash
char	*extract_line(char *stash)
{
	size_t	i;
	size_t	j;
	char	*line;

	i = 0;
	if (!stash[0])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)malloc(i + 2);
	if (!line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = stash[j];
		j++;
	}
	if (stash[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

// Update stash by removing the extracted line
char	*update_stash(char *stash)
{
	size_t	i;
	size_t	j;
	char	*new_stash;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	new_stash = (char *)malloc(gnl_strlen(stash) - i + 1);
	if (!new_stash)
		return (NULL);
	i++;
	j = 0;
	while (stash[i])
		new_stash[j++] = stash[i++];
	new_stash[j] = '\0';
	free (stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buffer);
		free(stash);
		buffer = NULL;
		stash = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	stash = read_and_append(fd, buffer, stash);
	free(buffer);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = update_stash(stash);
	return (line);
}
