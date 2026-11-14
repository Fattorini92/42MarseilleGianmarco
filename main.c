#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

int main(void)
{
    char s[] = "hello";

    printf("%s\n", ft_strrchr(s, 'l'));   // s + 3 (the last one)
    printf("%s\n", ft_strrchr(s, 'h'));   // s (index 0 is checked)
    printf("%s\n", ft_strrchr(s, 'z'));   // NULL
    printf("%s\n", ft_strrchr(s, '\0'));  // s + 5 (the case that failed)
    printf("%s\n", ft_strrchr(s, 256));   // s + 5
    printf("%s\n", ft_strrchr("", '\0')); // the string itself
    return 0;
}