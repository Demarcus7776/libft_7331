#include "libft.h"

int     ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return 1;
    return 0;
}

/*#include <stdio.h>
int main ()
{
    int c = 4;
    char b = 'z';

    if (ft_isdigit(b))
        printf("thats right jit");
    else
        printf("shit");
}*/