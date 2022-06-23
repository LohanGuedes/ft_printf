#include "ft_printf.h"

int	ft_push_unsigned_decimal(va_list args)
{
	unsigned int	num;
	num = va_arg(args, unsigned int);
	ft_putnbr_fd(num, 1);
	return (ft_digit_count(num, 10));
}
