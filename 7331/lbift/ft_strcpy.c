#include "libft.h"

char    *ft_strcpy(char *src, char *dst)
{
    int i;

    i = 0;
    while (dst[i])
    {
        src[i] = dst[i];
        i++;
    }

    src[i] = '\0';
    return src;
}

/*#include <stdio.h>

int main ()
{
    char s[] = "lebron";
    char l[55];
    char *f = ft_strcpy(l,s);

    printf("%s",f);
}*/