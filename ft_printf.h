/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <mzangaro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:10:32 by mzangaro          #+#    #+#             */
/*   Updated: 2024/12/08 20:11:42 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int	print_format(char specifier, va_list args);
int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_str(char *str);
int	print_dec(int n);
int	print_hex(unsigned int n, const char *symbols);
int	print_unsigned(unsigned int n);
int	print_long(unsigned long n, const char *symbols);
int	print_ptr(unsigned long n, const char *symbols);
#endif