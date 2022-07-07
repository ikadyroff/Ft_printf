/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:29:44 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 17:19:32 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_x(int *len, unsigned long long num)
{
	if (num >= 16)
		write_x(len, num / 16);
	num %= 16;
	if (num >= 9 && num <= 16)
	{
		if (num == 10)
			write_c(len, 'a');
		if (num == 11)
			write_c(len, 'b');
		if (num == 12)
			write_c(len, 'c');
		if (num == 13)
			write_c(len, 'd');
		if (num == 14)
			write_c(len, 'e');
		if (num == 15)
			write_c(len, 'f');
	}
	if (num <= 9)
		write_c(len, num + '0');
	len++;
}
