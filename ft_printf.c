#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(char *string, ...)
{
	int		c_print;
	int		offset;
	va_list	args;

	c_print = 0;
	va_start(args, string);
	while (string[offset++])
	{
		if (string[offset] == '%' && ft_isplaceholder(string[offset + 1]))
		{
			c_print += ft_push_right(string[offset], args);
		}
		c_print++;
		ft_putchar_fd(string[offset], 1);
	}
	va_end(args);
	return (c_print);
}
