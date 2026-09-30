#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    if(count == 0 || size == 0)
    {
        void *p = malloc(count * size);
        if(!p)
            return NULL;
        return p;
    }
    void *p = malloc(count * size);
    if (!p)
        return NULL;
    size_t i = 0;
    unsigned char *pt = (unsigned char *)p;
    while (i < count * size)
    {
        pt[i] = 0;
        i++;
    }
    return pt;
}