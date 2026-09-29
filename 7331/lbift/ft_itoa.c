#include "libft.h"
#include <stdlib.h>

int	count(int nb)
{
	int c;
	c = 0;

	if(nb < 0)
	{
		c++;
		nb = -nb;
	}

	while(nb >= 1)
	{
		nb = nb / 10;
		c++;
	}
	
	return c;
}

char *ft_itoa(int nb)
{
	int l;
	char *s;

	l = count(nb);
	s = malloc(sizeof(char) * l + 1);
	if(!s)
		return NULL;
	
	s[l] = '\0';
	if(nb == 0)
		s[0] = 0;
	if(nb < 0)
	{
		s[0] = '-';
		nb = -nb;
 
		l--;
		while(l > 0)
		{
			s[l] = nb % 10 + '0';
			nb = nb / 10;
			l--;
		}		
	}
	if(nb > 0)
	{
		l--;
		while(l >= 0)
		{
			s[l] = nb % 10 + '0';
			nb = nb / 10;
			l--;
		}
	}
	
	return s;
}
/*int main(void)
{
	int nb = -2147483648;
	char *s = ft_itoa(nb);
	printf("%s\n", s);
	free(s);
	return 0;
}*/