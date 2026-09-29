#include "libft.h"

size_t ftt_strlen(const char *s)
{
    size_t i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

char *ft_strrchr(const char *s, int c)
{
    size_t len = ftt_strlen(s);

    while(len > 0)
    {
        if(s[len] == c)
            return ((char *)&s[len]);
        len--;
    }

    return NULL;
}

/*#include <stdio.h>

int main ()
{
    char s[]= "hell";
    char c = 'l';

    printf("%s", ft_strrchr(s,c));
}*/