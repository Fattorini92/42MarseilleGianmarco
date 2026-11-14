#include "libft.h"

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
}
	*/

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "aszsd";
	char	c[] = "hello";
	char	d[] = "aszsd";
	size_t n = 0;

	if (ft_strlcpy(a, b, n) == strlcpy(c, d, n))
	{
		printf("it matches =  %s   \n ", a);
		printf("stringsize_myft =  %zu   \n ", ft_strlcpy(a, b, n));
		printf("library = %s \n", c);
		printf("stringsizelibrary =  %zu   \n ", strlcpy(c, d, n));
		
	}
	else
	{
		printf("it doesn't match \n mine  = %s \n", a);
		printf("stringsizeft =  %zu   \n ", ft_strlcpy(a, b, n));
		printf("library = %s  \n", c);
		printf("stringsizelibrary =  %zu   \n ", strlcpy(c, d, n));
	}
	return (0);
}
