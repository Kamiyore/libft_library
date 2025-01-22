/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:46:09 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/05 09:00:46 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	if (n <= 0)
	{
		len = 1;
	}
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = ft_num_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	num = n;
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		if (n < 0 && len == 0)
			break ;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(123);
// 	printf("%s\n", str); // 123
// 	free(str);
// 	str = ft_itoa(-456);
// 	printf("%s\n", str); // -456
// 	free(str);
// 	str = ft_itoa(0);
// 	printf("%s\n", str); // 0
// 	free(str);
// 	str = ft_itoa(INT_MIN);
// 	printf("%s\n", str); // -2147483648
// 	free(str);
// 	str = ft_itoa(INT_MAX);
// 	printf("%s\n", str); // 2147483647
// 	free(str);
// 	return (0);
// }
// //len = 1 zajistuje prostor pro -.- 457 bude dlouhy 4