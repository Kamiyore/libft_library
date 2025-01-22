/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:30:49 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 12:08:23 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int test1 = 32;  // Space
// 	int test2 = 126; // '~'
// 	int test3 = 31;  // (before printable ASCII 32)
// 	int test4 = 127; // (after printable ASCII 126)
// 	int test5 = 'A'; // 'A'
// 	printf("ft_isprint(%d) = %d\n", test1, ft_isprint(test1));   // 1
// 	printf("ft_isprint(%d) = %d\n", test2, ft_isprint(test2));   // 1
// 	printf("ft_isprint(%d) = %d\n", test3, ft_isprint(test3));   // 0
// 	printf("ft_isprint(%d) = %d\n", test4, ft_isprint(test4));   // 0
// 	printf("ft_isprint('%c') = %d\n", test5, ft_isprint(test5)); // 1
// 	return (0);
// }
