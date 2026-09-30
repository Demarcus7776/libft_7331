#include "libft.h"

char    *ft_strncpy(char *src, char *dst, size_t n)
{
    size_t i ;

    i = 0;
    while (i < n && dst[i])
    {
        src[i] = dst[i];
        i++;
    }
    src[i] = '\0';
    return src;
}

/*#include <stdio.h>

int main()
{
    char s[] = "hello";
    char ir[44];
    char *st = ft_strncpy(ir, s, 4);

    printf("%s", st);
}*/