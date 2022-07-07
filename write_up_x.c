/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:31:02 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 17:21:14 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_up_x(int *len, unsigned long long num)
{
	if (num >= 16)
		write_up_x(len, num / 16);
	num %= 16;
	if (num >= 9 && num <= 16)
	{
		if (num == 10)
			write_c(len, 'A');
		if (num == 11)
			write_c(len, 'B');
		if (num == 12)
			write_c(len, 'C');
		if (num == 13)
			write_c(len, 'D');
		if (num == 14)
			write_c(len, 'E');
		if (num == 15)
			write_c(len, 'F');
	}
	if (num <= 9)
		write_c(len, num + '0');
	len++;
}
