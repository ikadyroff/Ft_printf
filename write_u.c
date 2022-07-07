/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:49:28 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 17:22:03 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_u(int *len, unsigned int num)
{
	if (num >= 10)
		write_d_or_i(len, num / 10);
	write_c(len, (num % 10 + '0'));
	len++;
}
