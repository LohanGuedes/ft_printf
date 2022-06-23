#include "ft_printf.h"

int	ft_push_right(char c, va_list args)
{
	if (c == 'c')
		return (ft_push_char(args));
	if (c == 's')
		return (ft_push_string(args));
	if (c == 'd' || c == 'i')
		return (ft_push_decimal(args));
	if (c == 'u')
		return (ft_push_unsigned_decimal(args));
	if (c == 'x')
		return (ft_push_hex_lower(args));
	if (c == 'X')
		return (ft_push_hex_upper(args));
	if (c == 'p')
		return (ft_push_pointer(args));
	if (c == '%')
		return (ft_push_percent());
}
