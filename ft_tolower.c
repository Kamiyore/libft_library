/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:35:40 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 17:45:47 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int test1 = 'A';
// 	int test2 = 'Z';
// 	int test3 = 'a';
// 	int test4 = '!';
// 	int test5 = '0';

// 	printf("ft_tolower('%c') = '%c'\n", test1, ft_tolower(test1)); // 'a'
// 	printf("ft_tolower('%c') = '%c'\n", test2, ft_tolower(test2)); // 'z'
// 	printf("ft_tolower('%c') = '%c'\n", test3, ft_tolower(test3)); // 'a'
// 	printf("ft_tolower('%c') = '%c'\n", test4, ft_tolower(test4)); // '!'
// 	printf("ft_tolower('%c') = '%c'\n", test5, ft_tolower(test5)); // '0'

// 	return (0);
// }
