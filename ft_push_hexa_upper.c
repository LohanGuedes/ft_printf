#include "ft_printf.h"

int	ft_push_hex_upper(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_puthexanbr_fd(num, 1, "0123456789ABCDEF");
	return(ft_digit_count(num, 16));
}
