#include "libft.h"

int     ft_isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            return 1;
    return 0;
}

/*#include <stdio.h>

int main ()
{
    int f = 9;

    if(ft_isalpha(f))
        printf("finally");
    else
        printf("tung tung sahur");
}*/