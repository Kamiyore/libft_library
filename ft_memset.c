/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:45:46 by knemcova          #+#    #+#             */
/*   Updated: 2024/10/28 19:35:16 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	arr[10];

// 	ft_memset(arr, 'A', 5);
// 	ft_memset(arr + 5, '2', 5);
// 	printf("Obsah pole: ");
// 	printf("%c %c %c %c %c %c %c %c %c %c\n", arr[0], arr[1], arr[2], arr[3],
// 		arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
// 	return (0);
// }

// fills the first n bytes of the memory area with the specific vlaue
// unsigned char is a 1byte (8bits)and has a range of 0 to 225
// string = (unsigned char *)s  void * univerzální ukazatel,nemůžeme manipulovat
// k pristupu jednotlivych bajtum paměti, prevest na typ unsigned char *