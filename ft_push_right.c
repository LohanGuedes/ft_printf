#include "ft_printf.h"

int	ft_push_right(char c, va_list args)
{
	if (c == 'c')
		return (ft_push_char(args));
	else if (c == 's')
		return (ft_push_string(args));
	else if (c == 'd' || c == 'i')
		return (ft_push_decimal(args));
	else if (c == 'u')
		return (ft_push_unsigned_decimal(args));
	else if (c == 'x')
		return (ft_push_hex_lower(args));
	else if (c == 'X')
		return (ft_push_hex_upper(args));
	else if (c == 'p')
		return (ft_push_pointer(args));
	else
		return (ft_push_percent());
}
