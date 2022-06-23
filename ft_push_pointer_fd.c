#include "ft_printf.h"

int	ft_push_pointer(va_list args)
{
	unsigned long int	address;

	address = va_arg(args, unsigned long int);
	ft_putstr_fd("0x", 1);
	ft_puthexanbr_fd(address, 1, "0123456789abcdef");
	if(!address)
		return 3;
	return (ft_digit_count(address, 16) + 2)
}
