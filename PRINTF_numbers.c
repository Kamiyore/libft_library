/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PRINTF_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:43:39 by knemcova          #+#    #+#             */
/*   Updated: 2025/01/21 08:15:21 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_number_prt(int number, int *length)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar_length_prt('-', length);
		ft_number_prt(number * -1, length);
	}
	else
	{
		if (number > 9)
			ft_number_prt(number / 10, length);
		ft_putchar_length_prt(number % 10 + '0', length);
	}
}

void	ft_pointer_prt(void *ptr, int *length)
{
	size_t	pointer;
	char	string[16];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	pointer = (size_t)ptr;
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		(*length) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*length) += 2;
	while (pointer)
	{
		string[i++] = base[pointer % 16];
		pointer /= 16;
	}
	while (i--)
		ft_putchar_length_prt(string[i], length);
}

void	ft_hexadecimal_prt(unsigned int x, int *length, char x_or_x)
{
	char	string[16];
	char	*base;
	int		i;

	if (x_or_x == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_length_prt('0', length);
		return ;
	}
	while (x != 0)
	{
		string[i] = base[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_length_prt(string[i], length);
}

void	ft_unsigned_int_prt(unsigned int u, int *length)
{
	if (u >= 10)
		ft_unsigned_int_prt(u / 10, length);
	ft_putchar_length_prt(u % 10 + '0', length);
}
