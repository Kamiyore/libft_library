/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:27:29 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 12:00:26 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

// 	test1 = '0';
// 	test2 = '5';
// 	test3 = '9';
// 	test4 = 'A';
// 	test5 = '!';
// 	printf("ft_isdigit('%c') = %d\n", test1, ft_isdigit(test1)); // 1
// 	printf("ft_isdigit('%c') = %d\n", test2, ft_isdigit(test2)); // 1
// 	printf("ft_isdigit('%c') = %d\n", test3, ft_isdigit(test3)); // 1
// 	printf("ft_isdigit('%c') = %d\n", test4, ft_isdigit(test4)); // 0
// 	printf("ft_isdigit('%c') = %d\n", test5, ft_isdigit(test5)); // 0
// 	return (0);
// }
