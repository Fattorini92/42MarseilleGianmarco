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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "libft.h"

static void check(char const *s1, char const *s2, char const *expected)
{
	char *result;

	result = ft_strtrim(s1, s2);
	if (expected == NULL && result == NULL)
		printf("OK  [NULL]\n");
	else if (expected != NULL && result != NULL && strcmp(result, expected) == 0)
		printf("OK  [%s]\n", result);
	else
		printf("KO  expected [%s], got [%s]\n",
			   expected ? expected : "NULL", result ? result : "NULL");
	free(result);
}

int main(void)
{
	check("hello", "h", "ello");
	check("hello", "o", "hell");
	check("", "world", "");
	check("hello", "xyz", "hello");
	check("hello", "", "hello");
	check("hello", "lo", "he");
	check(NULL, "hello", NULL);
	check("hello", NULL, NULL);
	check(NULL, NULL, NULL);
	return (0);
}
