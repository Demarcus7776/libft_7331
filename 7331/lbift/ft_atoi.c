#include "libft.h"

size_t    ft_atoi(const char *s)
{
    size_t i;
    size_t si;
    size_t r;

    i = 0;
    si = 1;
    r = 0;
    while ( s[i] == '\t' || s[i] == ' ' || s[i] == '\v')
                i++;
    while (s[i] == '-' || s[i] == '+')
    {
        if(s[i] == '-')
            si *= 1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
            r = r * 10 + s[i] - 48;
            i++;
    }
    return r * si ;
}

/*#include <stdio.h>

int main ()
{
    char s[] = "+-+-23ab";
    
    printf("%zu", ft_atoi(s));
}*/