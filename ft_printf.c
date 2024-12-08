#include "ft_printf.h"

int	print_format(char specifier, va_list args)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i += print_char(va_arg(args, int));
	else if (specifier == 's')
		i += print_str(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		i+= print_dec(va_arg(args, int));
	else if (specifier == 'x' || specifier == 'X')
	{
		if (specifier == 'x')
			i+= print_hex(va_arg(args, unsigned int), HEX_LOW_BASE);
		else
			i+= print_hex(va_arg(args, unsigned int), HEX_UPP_BASE);
	}
	else
		i += write(1, &specifier, 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	i;

	va_start(args, format);
	i = 0;
	while (*format)
	{
		if(*format == '%')
		{
			format++;
			if (*format == '%')
				i += write(1, "%", 1);
			else
				i += print_format(*format, args);
		}
		else
			i += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (i);
}

int	main()
{
	int	count;
	
	count = ft_printf("Test s:\nHello %s\n", "Mauro");
	ft_printf("The chars written are %d\n", count);
	count = printf("printf: Hello %s\n", "Mauro");
	printf("The chars written are %d\n", count);

	count = ft_printf("Test x:\n%x\n", -42);
	ft_printf("The chars written are %d\n", count);
	count = printf("printf: %x\n", -42);
	printf("The chars written are %d\n", count);

	count = ft_printf("Test d:\n%d\n", -42);
	ft_printf("The chars written are %d\n", count);
	count = printf("printf: %d\n", -42);
	printf("The chars written are %d\n", count);

		count = ft_printf("Test X:\n%X\n", -42);
	ft_printf("The chars written are %d\n", count);
	count = printf("printf: %X\n", -42);
	printf("The chars written are %d\n", count);
}