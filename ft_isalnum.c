/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:28:24 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 12:02:50 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	test1;
// 	int	test2;
// 	int	test3;
// 	int	test4;
// 	int	test5;

// 	test1 = 'a';
// 	test2 = 'Z';
// 	test3 = '5';
// 	test4 = '@';
// 	test5 = ' ';
// 	printf("('%c') = %d\n", test1, ft_isalnum(test1)); // 1
// 	printf("('%c') = %d\n", test2, ft_isalnum(test2)); // 1
// 	printf("('%c') = %d\n", test3, ft_isalnum(test3)); // 1
// 	printf("('%c') = %d\n", test4, ft_isalnum(test4)); // 0
// 	printf("('%c') = %d\n", test5, ft_isalnum(test5)); // 0
// 	return (0);
// }
