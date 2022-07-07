/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:57:09 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 14:57:31 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_s(int *len, char *str)
{
	int	n;

	n = 0;
	if (!str)
		str = "(null)\0";
	while (str[n])
		n++;
	write(1, str, n);
	*len += n;
}
