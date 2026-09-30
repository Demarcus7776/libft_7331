#include "libft.h"
#include <stdlib.h>

int	ftt_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}

char  *ft_strjoin(char *s, char *sep)
{
	int i;
	int len_sep;
	int len;
	char *str;

	len_sep = ftt_strlen(sep);
	len = ftt_strlen(*s);
	str = (char *)malloc(sizeof(char) * len + len_sep + 1);

	if(!str)
	{
		return NULL;
	}
	i = 0;
	while(*s[i])
	{
		
	}
}
