/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:57:25 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 19:36:40 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	src[] = "Hello, world!";
// 	char		dest[6];
// 	size_t		len;

// 	len = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Source: %s\n", src);                // Hello, world!
// 	printf("Destination: %s\n", dest);          // Hello
// 	printf("Lenght of the source: %zu\n", len); // 13
// 	return (0);
// }
//Dva ukoly: kopiruje retezce jako strcpy, a pocita delku puvodniho zdroje
//zvlada preteceni bufferu aby se vesli spolu s \0