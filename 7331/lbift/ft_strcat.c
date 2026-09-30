#include "libft.h"

int ftt_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }

    return i;
}

char    *ft_strcat(char *s1, char *s2)
{
    size_t i;
    size_t j;
    size_t l = ftt_strlen(s1);
    size_t len = ftt_strlen(s2);
    size_t max = l + len;

    i = 0;
    j = 0;
    while(i < max)
    {
        s1[i] = s2[j];
        i++;
        j++;
    } 
    s1[i] = '\0';
    return s1;
}

#include <stdio.h>

int main ()
{
    char s1[] = "lebron";
    char s2[] = "james";
    char *s = ft_strcat(s1,s2);

    printf("%s", s);
}