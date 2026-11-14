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
	char	b[] = "asaszs";
	char	c[] = "hello";
	char	d[] = "asaszs";
	size_t n = 6;

	if (ft_strlcat(a, b, n) == strlcat(c, d, n))
	{
		printf("size of my ft =  %u   \n ", ft_strlcat(a, b, n));		
		printf("it matches =  %s   \n ", a);
		printf("size of system =  %u   \n ", strlcat(c, d, n));		
		printf("library = %s \n", c);
		
	}
	else
	{
		printf("it doesn't match \n mine  = %s \n", a);
		printf("size of my ft =  %u   \n ", ft_strlcat(a, b, n));		
		printf("library = %s \n", c);
		printf("size of system =  %u   \n ", strlcat(c, d, n));		
	}
	return (0);
}

