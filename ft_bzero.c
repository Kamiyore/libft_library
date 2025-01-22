/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:49:00 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 14:11:22 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[10] = "Hi there";

// 	printf("Before bzero: '%s'\n", str);
// 	ft_bzero(str, 3);
// 	printf("After bzero: '%s'\n", str);
// 	printf("After bzero: '%s'\n", str + 3);
// 	return (0);
// }
// // nastavuje pouze urcitou cast bytu na 0/,
// // takze pokud jsou prvni 3 znaky /0, zbytek retezce stale zustane.