#include "libft.h"

size_t     ft_strncmp(char *s1, char *s2)
{
    size_t i;

    i = 0;
    while(s1[i] == s2[i])
        i++;

    return (s1[i] - s2[i]);
}