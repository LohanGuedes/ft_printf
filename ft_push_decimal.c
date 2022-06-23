#include "ft_printf.h"
#include "libft/libft.h"

int	ft_push_decimal(va_list args)
{
	int	num;
	num = va_arg(args, int);
	ft_putnbr_fd(num, 1);
	if(num < 0)
		return(ft_digit_count(num, 10) + 1);
	return (ft_digit_count(num, 10));
}
