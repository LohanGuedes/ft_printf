#include "ft_printf.h"
#include "libft/libft.h"

int	ft_push_string(va_list args)
{
	char	*string;

	string = va_arg(args, char*);
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}
