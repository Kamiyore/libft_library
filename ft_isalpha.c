/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:24:36 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 11:54:13 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)

{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char test1 = 'A';
// 	char test2 = 'z';
// 	char test3 = '1';
// 	char test4 = '!';
// 	printf("Test '%c': %d\n", test1, ft_isalpha(test1)); // 1
// 	printf("Test '%c': %d\n", test2, ft_isalpha(test2)); // 1
// 	printf("Test '%c': %d\n", test3, ft_isalpha(test3)); // 0
// 	printf("Test '%c': %d\n", test4, ft_isalpha(test4)); // 0
// 	return (0);
// }
