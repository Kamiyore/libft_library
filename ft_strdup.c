/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:49:44 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/29 13:03:49 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dup;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// #include <stdio.h>
// int	main(void)
// {
// 	const char	*original = "Hello world!";
// 	char		*copy;

// 	copy = ft_strdup(original);
// 	if (copy == NULL)
// 	{
// 		printf("Error.\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Copy: %s\n", copy);
// 	free(copy);
// 	return (0);
// }
// Alokuje paměť pro nový řetězec, zkopíruje do ní obsah původního řetězce 
//a vrátí ukazatel na novou kopii. Ret.val. ukazatel na novy retezec.