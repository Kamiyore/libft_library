/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:45:59 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/08 16:26:30 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_memset(result, 0, nmemb * size);
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	*arr;
// 	size_t	size;

// 	size_t nmemb = (size_t)-1; // maximální hodnota size_t
// 	size = sizeof(int);
// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr[%d] = %d\n", i, arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
