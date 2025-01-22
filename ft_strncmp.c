/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:33:50 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 18:48:08 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("apple", "apples", 5));
// 	// Output: 0
// 	printf("%d\n", ft_strncmp("apple", "apples", 6));
// 	// Output: negative value
// 	printf("%d\n", ft_strncmp("apple", "banana", 3));
// 	// Output: negative value
// 	printf("%d\n", ft_strncmp("", "appLe", 5));
// 	// Output: positive value
// 	printf("%d\n", ft_strncmp("apple", "apple", 0));
// 	// Output: 0 (n = 0 means no comparison)
// 	return (0);
// }
