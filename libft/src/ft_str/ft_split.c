/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:22 by krenken           #+#    #+#             */
/*   Updated: 2024/07/22 13:31:07 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
*/

// counts the number of words in the string 'str' separated by character 'c'.
static size_t	words_counter(const char *str, char c)
{
	size_t	counter;
	int		i;
	int		word;

	counter = 0;
	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (!word && str[i] != c)
		{
			word = 1;
			counter++;
		}
		else if (word && str[i] == c)
			word = 0;
		i++;
	}
	return (counter);
}

// creates a duplicate of a substring from str,
// starting at index start and ending at index finish.
static char	*create_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

// frees the memory allocated for the array of strings created by ft_split
static void	free_split(char **split, int limit)
{
	int	i;

	i = 0;
	while (i <= limit)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

// splits string s into an array of strings based on the delimiter character c.
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((words_counter(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = create_word(s, index, i);
			if (!split[j - 1])
				return (free_split(split, --j), NULL);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}

/*void print_result(char **result)
{
    if (result == NULL)
    {
        printf("Split failed (NULL returned)\n");
        return;
    }
    
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("[%s] ", result[i]);
    }
    printf("\n");
}

void free_result(char **result)
{
    if (result == NULL)
        return;
    
    for (int i = 0; result[i] != NULL; i++)
    {
        free(result[i]);
    }
    free(result);
}

int main()
{
    char **result;

    printf("Test 1: Basic splitting\n");
    result = ft_split("Hello world! This is a test.", ' ');
    print_result(result);
    free_result(result);

    printf("\nTest 2: Multiple consecutive delimiters\n");
    result = ft_split("   Split   this   string   ", ' ');
    print_result(result);
    free_result(result);

    printf("\nTest 3: No delimiter in string\n");
    result = ft_split("NoDelimiterHere", ' ');
    print_result(result);
    free_result(result);

    printf("\nTest 4: Empty string\n");
    result = ft_split("", ' ');
    print_result(result);
    free_result(result);

    printf("\nTest 5: String with only delimiters\n");
    result = ft_split("     ", ' ');
    print_result(result);
    free_result(result);

    printf("\nTest 6: Different delimiter\n");
    result = ft_split("apple,orange,banana,grape", ',');
    print_result(result);
    free_result(result);

    return 0;
}*/

/*void *zeig_erg(char **erg)
{
	int i;
	i = 0;
	while (erg[i] != NULL)
		ft_putendl_fd(erg[i++], 1);
	
	return 0;
}

int main(void)
{
	char **lea;

	lea = ft_split("MeyercLea", 'c');
	zeig_erg(lea);
	
	return (0);
}*/