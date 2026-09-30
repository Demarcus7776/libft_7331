#include "libft.h"
#include <stdlib.h>

int ft_strln(const char *s)
{
    int j;

    j = 0;
    while(s[j])
    {
        j++;
    }
    return j;
}

char *ft_strdup(const char *str)
{
    int i;
    int len;
    char *s;

    len = ft_strln(str);
    i = 0;
    s = (char *) malloc(sizeof(char) * len + 1);

    while(str[i])
    {
        s[i] = str[i];
        i++;
    }

    s[i] = '\0';

    return s;
}

/*#include <stdio.h>

int main ()
{
    char s[] = "lola";

    printf("%s", ft_strdup(s));
}*/