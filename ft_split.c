/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:42:39 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/04 12:08:20 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc((n + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[n] = '\0';
	return (dup);
}

static void	ft_free_split(char **result, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_fill_result(char **result, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[index] = ft_strndup(s + start, i - start);
			if (!result[index])
			{
				ft_free_split(result, index);
				return (0);
			}
			index++;
		}
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**result;

	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[words] = NULL;
	if (!ft_fill_result(result, s, c))
		return (NULL);
	return (result);
}

// int	main(void)
// {
// 	const char	*str = "Hi there, this is a test.";
// 	char		delimiter;
// 	char		**result;
// 	int			i;

// 	delimiter = ' ';
// 	result = ft_split(str, delimiter);
// 	i = 0;
// 	if (!result)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	while (result[i])
// 	{
// 		printf("Array %d: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
