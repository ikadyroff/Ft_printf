/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni <wlouveni@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:57:05 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/07 12:03:17 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	srctype(const char *line, int *len, va_list type)
{
	if (*line == 'c')
		write_c(len, va_arg(type, int));
	else if (*line == 's')
		write_s(len, va_arg(type, char *));
	else if (*line == 'p')
		write_p(len, va_arg(type, unsigned long long));
	else if (*line == 'd' || *line == 'i')
		write_d_or_i(len, va_arg(type, int));
	else if (*line == 'u')
		write_u(len, va_arg(type, unsigned int));
	else if (*line == 'x')
		write_x(len, va_arg(type, unsigned int));
	else if (*line == 'X')
		write_up_x(len, va_arg(type, unsigned int));
	else if (*line == '%')
		write_c(len, '%');
	else
	{
		write(1, line, 1);
		len++;
	}
}

int	ft_printf(const char *line, ...)
{
	int		len;
	va_list	type;

	len = 0;
	va_start(type, line);
	if (!line)
		return (-1);
	while (*line)
	{
		if (*line != '%')
		{
			write(1, line++, 1);
			len++;
		}
		if (*line == '%')
		{
			srctype(++line, &len, type);
			line++;
		}
	}
	va_end(type);
	return (len);
}
