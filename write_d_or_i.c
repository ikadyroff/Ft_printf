/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_d_or_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:20:57 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 14:54:51 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_d_or_i(int *len, int num)
{
	if (num == -2147483648)
		write_s(len, "-2147483648");
	else
	{
		if (num < 0)
		{
			write_c(len, '-');
			num *= -1;
		}
		if (num >= 0 && num < 10)
			write_c(len, num + '0');
		if (num >= 10)
		{
			write_d_or_i(len, num / 10);
			write_d_or_i(len, num % 10);
			len++;
		}
	}
}
