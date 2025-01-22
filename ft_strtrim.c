/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:36:57 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/05 08:18:41 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end - 1], set))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1 + start, end - start);
	result[end - start] = '\0';
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	const char	*str = "*&Hello, world!(";
// 	const char	*set = "&*() ";
// 	char		*trimmed;

// 	trimmed = ft_strtrim(str, set);
// 	if (trimmed)
// 	{
// 		printf("Cut off string: '%s'\n", trimmed); // Result: "Hello, world!"
// 		free(trimmed);
// 	}
// 	else
// 	{
// 		printf("Error.\n");
// 	}
// 	return (0);
// }
