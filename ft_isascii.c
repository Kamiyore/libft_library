/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:26:06 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 12:04:50 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <stdio.h>

// int	main(void)

// {
// 	int test1 = 65;  // ASCII 'A'
// 	int test2 = 127; // last ASCII
// 	int test3 = 128; // exceed ASCII
// 	int test4 = -1;  // negative number
// 	int test5 = 0;   // 0

// 	printf("ft_isascii(%d) = %d\n", test1, ft_isascii(test1)); // 1
// 	printf("ft_isascii(%d) = %d\n", test2, ft_isascii(test2)); // 1
// 	printf("ft_isascii(%d) = %d\n", test3, ft_isascii(test3)); // 0
// 	printf("ft_isascii(%d) = %d\n", test4, ft_isascii(test4)); // 0
// 	printf("ft_isascii(%d) = %d\n", test5, ft_isascii(test5)); // 1

// 	return (0);
// }
