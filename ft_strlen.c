/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:33:07 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 12:12:51 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";

// 	printf("Length: %zu\n", ft_strlen(str));
// 	return (0);
// }

//calculates the length of the string excluding the ('\0')