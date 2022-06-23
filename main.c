#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int  a[10];
	int  b[10];
	int total;
	char *s;

	a[0] = ft_printf("ft_printf:\n");
	a[1] = ft_printf("Char output: %c\n", 'c');
	a[2] = ft_printf("String output: %s\n", "Hello, printf!");
	a[3] = ft_printf("String null output: %s\n", s);
	a[4] = ft_printf("Decimal/integer output: %d | %i\n", -2147483648, 2147483647);
	a[5] = ft_printf("unsigned decimal output: %u\n", 4294967295);
	a[6] = ft_printf("hexadecimal (lower) output: %x\n", 4095);
	a[7] = ft_printf("hexadecimal (upper) output: %X\n", 4095);
	a[7] = ft_printf("Pointer output: %p\n", &a);
	a[8] = ft_printf("Percent LOL: %%\n");

	for(int i = 0; i < 10; i++){
		total += a[i];
	}
	ft_printf("Chars printed: %i\n", total);
	ft_printf("\n\n\n");
	b[0] = printf("printf:\n");
	b[1] = printf("Char output: %c\n", 'c');
	b[2] = printf("String output: %s\n", "Hello, printf!");
	b[3] = printf("String null output: %s\n", s);
	b[4] = printf("Decimal/integer output: %ld | %i\n", -2147483648, 2147483647);
	b[5] = printf("unsigned decimal output: %ld\n", 4294967295);
	b[6] = printf("hexadecimal (lower) output: %x\n", 4095);
	b[7] = printf("hexadecimal (upper) output: %X\n", 4095);
	b[7] = printf("Pointer output: %p\n", &a);
	b[8] = printf("Percent LOL: %%\n");
	total = 0;
	for(int i = 0; i < 10; i++){
		total += b[i];
	}
	printf("Chars printed: %i\n", total);
}
