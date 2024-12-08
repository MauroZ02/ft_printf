
#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		print_char((int)str[i]);
		i++;
	}
	return (i);
}
int	print_dec(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		i += 1;
		n = -n;
	}
	if (n > 9)
		i += print_dec(n / 10);
	i += print_char(n % 10 + '0');
	return (i);
}
int	print_hex(unsigned int n, const char *symbols)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += print_hex(n / 16, symbols);
	i += print_char(symbols[n % 16]);
	return (i);
}

/*int	print_num(int n, int base)
{
	int	i;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_num(-n, base) + 1);
	}
	else if (n < base)
		return (print_char(symbols[n]));
	else
	{
		i = print_num(n / base, base);
		return (i + print_num(n % base, base));
	}
}
int print_num(unsigned int n, int base)
{
    int i;
    char *symbols = "0123456789abcdef";

    if (n >= (unsigned int)base)
    {
        i = print_num(n / base, base);
        return (i + print_char(symbols[n % base]));
    }
    else
        return (print_char(symbols[n]));
}*/
