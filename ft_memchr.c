/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:51:15 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:45 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	data[] = "Hello, World!";
// 	char	*result;

// 	result = ft_memchr(data, 'l', 13);
// 	if (result != NULL)
// 	{
// 		printf("Character found %c\n", *result);
// 	}
// 	else
// 	{
// 		printf("Not found.\n");
// 	}
// 	return (0);
// }
// slouzi k hledani prvniho vyskyu znaku v bloku pameti a vraci na nej ukazatel
