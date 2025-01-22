/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PRINTF_characters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:44:55 by knemcova          #+#    #+#             */
/*   Updated: 2025/01/21 08:15:11 by knemcova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_length_prt(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_string_prt(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putchar_length_prt(args[i], length);
		i++;
	}
}
