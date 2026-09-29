#include "libft.h"

int     ft_isalnum (int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 1 && c <= 9))
            return 1;
    return 0;
}

/*#include <stdio.h>

int main ()
{
    int c = 3;
    char b = 'a';

    if(ft_isalnum(b))
        printf("ur right");
    else
        printf("bruh");
}*/