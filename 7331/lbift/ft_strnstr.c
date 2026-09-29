#include "libft.h"

char *ft_strnstr(const char *s,const char *n, size_t l)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(i < l && s[i])
    {
        while(n[j] == s[i])
        {
            j++;
        }
        
        i++;
    }

    return NULL;
}

#include <stdio.h>

int main ()
{
    char s[] = "hello world";
    char n[] = "world";

    printf("%s", ft_strnstr(s,n,11));
}