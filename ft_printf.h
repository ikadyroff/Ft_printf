/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlouveni < wlouveni@student.21-school.r    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:57:17 by wlouveni          #+#    #+#             */
/*   Updated: 2021/12/06 17:21:14 by wlouveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *line, ...);

void	write_c(int *len, char sym);
void	write_s(int *len, char *str);
void	write_d_or_i(int *len, int num);
void	write_p(int *len, unsigned long long adds);
void	write_u(int *len, unsigned int num);
void	write_x(int *len, unsigned long long num);
void	write_up_x(int *len, unsigned long long num);

#endif