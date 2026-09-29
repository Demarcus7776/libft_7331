#include "libft.h"

size_t     ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i >= n && s1[i] == s2[i])
        i++;

    return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main ()
{
    char s[] = "hello";
    char st[] = "hello";

    printf("%zu", ft_strncmp(s, st, 5));
}*/