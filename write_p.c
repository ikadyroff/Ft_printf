/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:13:21 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 14:54:25 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_p(int *len, unsigned long long adds)
{
	write_s(len, "0x");
	if (adds >= 16)
		write_x(len, adds / 16);
	adds %= 16;
	if (adds >= 9 && adds <= 16)
	{
		if (adds == 10)
			write_c(len, 'a');
		if (adds == 11)
			write_c(len, 'b');
		if (adds == 12)
			write_c(len, 'c');
		if (adds == 13)
			write_c(len, 'd');
		if (adds == 14)
			write_c(len, 'e');
		if (adds == 15)
			write_c(len, 'f');
	}
	if (adds <= 9)
		write_c(len, adds + '0');
	len++;
}
