/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:37:54 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 19:03:17 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	data1[] = "Hello, World!";
// 	char	data2[] = "Hello, Porld!";
// 	int		result;

// 	result = ft_memcmp(data1, data2, 13);
// 	if (result == 0)
// 	{
// 		printf("Both blocks are identical.\n");
// 		printf("%d", result);
// 	}
// 	else if (result < 0)
// 	{
// 		printf("data1 is less than data2.\n");
// 		printf("%d", result);
// 	}
// 	else
// 	{
// 		printf("data1 is greater than data2.\n");
// 		printf("%d", result);
// 	}
// 	return (0);
// }
// porovnava 2 bloky pameti jestli jsou stejne nebo ne (pouze urcitych n)