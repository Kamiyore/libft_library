/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:40:55 by knemcova          #+#    #+#             */
/*   Updated: 2024/11/05 09:12:25 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_space(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	return (i);
}

static int	check_sign(const char *str, int *index)
{
	int	sign;

	sign = 1;
	if (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			sign = -1;
		(*index)++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	long long	result;
	int			sign;
	int			i;

	result = 0;
	sign = 1;
	i = free_space(nptr);
	sign = check_sign(nptr, &i);
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		if ((result > (LONG_MAX - (nptr[i] - '0')) / 10))
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			return ((int)LONG_MIN);
		}
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)result * sign);
}

// #include <stdio.h>

// void	test_ft_atoi(const char *str)
// {
// 	int	result_ft;
// 	int	result;

// 	result_ft = ft_atoi(str);
// 	result = atoi(str);
// 	printf("ft_atoi(\"%s\") = %d (answer:%d)\n", str, result_ft, result);
// }

// int	main(void)
// {
// 	// Basic valid conversions
// 	test_ft_atoi("42");     // Expected: 42
// 	test_ft_atoi("   123"); // Expected: 123
// 	test_ft_atoi("-456");   // Expected: -456
// 	test_ft_atoi("+789");   // Expected: 789
// 	// With leading whitespaces
// 	test_ft_atoi("\t\n  214");   // Expected: 214
// 	test_ft_atoi(" \f\v\r-214"); // Expected: -214
// 	// With non-numeric characters after the number
// 	test_ft_atoi("123abc"); // Expected: 123 (stops at 'a')
// 	test_ft_atoi("-98.76"); // Expected: -98 (stops at '.')
// 	// Strings without valid numbers
// 	test_ft_atoi("abc");  // Expected: 0 (no numeric part)
// 	test_ft_atoi("--42"); // Expected: 0 (invalid format: multiple signs)
// 	test_ft_atoi("");     // Expected: 0 (empty string)
// 	// Large numbers to test overflow and edge cases
// 	test_ft_atoi("2147483647");
// 	// Expected: 2147483647 (INT_MAX)
// 	test_ft_atoi("-2147483648");
// 	// Expected: -2147483648 (INT_MIN)
// 	test_ft_atoi("2147483648");
// 	// Expected: 2147483647 (overflow -> INT_MAX)
// 	test_ft_atoi("-21474836507");
// 	// Expected: -2147483648 (overflow -> INT_MIN)
// 	// Extremely large numbers beyond `long long` range
// 	// 9,223,372,036,854,775,807
// 	test_ft_atoi("9223372036854775806");
// 	test_ft_atoi("9223372036854775807");
// 	test_ft_atoi("9223372036854775808");
// 	test_ft_atoi("9223372036854775810");
// 	// Expected: 2147483647 (overflow-> INT_MAX)
// 	//-9,223,372,036,854,775,807 - 1
// 	test_ft_atoi("-9223372036854775807");
// 	test_ft_atoi("-9223372036854775808");
// 	test_ft_atoi("-9223372036854775809");
// 	test_ft_atoi("-9223372036854775810");
// 	// Expected: -2147483648 (overflow-> INT_MIN)
// 	// Large unsigned number that doesn't fit in signed int/long long
// 	// 18,446,744,073,709,551,615
// 	test_ft_atoi("18446744073709551614");
// 	test_ft_atoi("18446744073709551615");
// 	test_ft_atoi("18446744073709551616");
// 	test_ft_atoi("18446744073709551625");
// 	// Expected: 2147483647 (overflow-> INT_MAX)
// 	return (0);
// }
