/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:58:05 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/04 17:52:00 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	if (d > s && d < s + n)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hi there";

// 	printf("Before memmove: '%s'\n", str);
// 	ft_memmove(str + 5, str + 3, 4);
// 	printf("After memmove: '%s'\n", str);
// 	return (0);
// }

// //lepe zvlada prekryvani, kopiruje zezadu