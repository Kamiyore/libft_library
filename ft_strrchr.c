/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:34:47 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 19:35:53 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hi there";
// 	char		ch1;
// 	char		ch2;
// 	char		ch3;
// 	char		*result1;
// 	char		*result2;
// 	char		*result3;

// 	ch1 = 't';
// 	ch2 = 'z';
// 	ch3 = '\0';
// 	result1 = ft_strrchr(str, ch1);
// 	if (result1)
// 	{
// 		printf("Last occurrence of '%c' found at position: %ld\n", ch1, result1
// 			- str);
// 		printf("Remaining string: %s\n", result1);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", ch1);
// 	}
// 	result2 = ft_strrchr(str, ch2);
// 	if (result2)
// 	{
// 		printf("Last occurrence of '%c' found at position: %ld\n", ch2, result2
// 			- str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found.\n", ch2);
// 	}
// 	result3 = ft_strrchr(str, ch3);
// 	if (result3)
// 	{
// 		printf("Null terminator '\\0' found at position: %ld\n", result3 - str);
// 	}
// 	return (0);
// }
//return ((char *)(s + i)) pokud neni +i, vracela by se pozice zacatku retezce