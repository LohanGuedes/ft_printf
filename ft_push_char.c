#include "ft_printf.h"

int	ft_push_char(va_list args)
{
	ft_putchar_fd(va_arg(args, int), 1);
	return (1);
}
