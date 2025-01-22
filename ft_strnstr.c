/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:32:31 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/06 09:58:03 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	small_len;
	size_t	i;

	small_len = ft_strlen(little);
	if (small_len == 0)
		return ((char *)big);
	i = 0;
	while (i + small_len <= len && big[i] != '\0')
	{
		if (ft_strncmp(&big[i], little, small_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*big = "Hi there!";
// 	const char	*little = "there";
// 	char		*result;

// 	result = ft_strnstr(big, little, 8);
// 	if (result != NULL)
// 	{
// 		printf("Found: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Not found.\n");
// 	}
// 	return (0);
// }
// //podobna funkci strstr, ale hledani je zde omezen na x znaku
// //porovnava se little a adresa ukazatele na "t"[here]