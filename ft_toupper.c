/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:36:14 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 17:37:45 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int test1 = 'a';
// 	int test2 = 'z';
// 	int test3 = 'A';
// 	int test4 = '!';
// 	int test5 = '9';

// 	printf("ft_toupper('%c') = '%c'\n", test1, ft_toupper(test1)); // 'A'
// 	printf("ft_toupper('%c') = '%c'\n", test2, ft_toupper(test2)); // 'Z'
// 	printf("ft_toupper('%c') = '%c'\n", test3, ft_toupper(test3)); // 'A'
// 	printf("ft_toupper('%c') = '%c'\n", test4, ft_toupper(test4)); // '!'
// 	printf("ft_toupper('%c') = '%c'\n", test5, ft_toupper(test5)); // '9'

// 	return (0);
// }
