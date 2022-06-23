#include "libft.h"

void	ft_puthexanbr_fd(unsigned long int n, int fd, char *digits)
{
	if(n < 16)
	{
		ft_putchar_fd(digits[n], 1);
		return ;
	}
	else
		ft_puthexanbr_fd(n / 16, fd, digits);
	ft_puthexanbr_fd(n % 16, fd, digits);
}
