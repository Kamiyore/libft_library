/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:28:14 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/04 17:51:40 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void	to_uppercase(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c -= 32;
// 	}
// }
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello, world!";

// 	ft_striteri(str, to_uppercase);
// 	printf("Changed string: %s\n", str);
// 	return (0);
// }
// //indexování c[i],by nedával smysl,pac c ukazuje jeden konkrétní znak.