/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:09:12 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 18:07:34 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
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

// 	ch1 = 'h';
// 	ch2 = 'z';
// 	ch3 = '\0';
// 	result1 = ft_strchr(str, ch1);
// 	if (result1)
// 	{
// 		printf("Character '%c' found on position: %ld\n", ch1, result1 - str);
// 		printf("Zbytek řetězce: %s\n", result1);
// 	}
// 	else
// 	{
// 		printf("Character'%c' was not found.\n", ch1);
// 	}
// 	result2 = ft_strchr(str, ch2);
// 	if (result2)
// 	{
// 		printf("Character'%c'found on the position : %ld\n", ch2, result2
// 			- str);
// 	}
// 	else
// 	{
// 		printf("Character'%c'was not found..\n", ch2);
// 	}
// 	result3 = ft_strchr(str, ch3);
// 	if (result3)
// 	{
// 		printf("Final character'\\0' found on the position: %ld\n", result3
// 			- str);
// 	}
// 	else
// 	{
// 		printf("Final character '\\0' was not found.\n");
// 	}
// 	return (0);
// }
// posledni if kontroluje jeslti je hledany znak '\0'
