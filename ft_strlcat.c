/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:02:51 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/08 16:14:44 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size || size == 0)
		return (size + src_len);
	while (src[i] && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20] = "Hello everybody";
// 	char	src[] = "123456789!";
// 	size_t	result;

// 	result = ft_strlcat(dest, src, 0);
// 	printf("Result: %zu\n", result);
// 	printf("Destination string: '%s'\n", dest);
// 	return (0);
// }
