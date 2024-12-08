#ifndef FT_PRINTF
#define FT_PRINTF

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int	print_format(char specifier, va_list args);
int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_str(char *str);
int	print_dec(int n);
int	print_hex(unsigned int n, const char *symbols);
# endif