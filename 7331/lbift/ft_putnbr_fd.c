#include "libft.h"
#include <unistd.h>

void	putnbr(int nb , int fd)
{
	char	c;

	if(nb == -2147483648)
		write(fd, "-2147483648", 11);

	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}

	if (nb >= 10)
	{
		putnbr(nb / 10 , fd);
	}
	
	c = nb % 10 + '0';
	write(fd, &c, 1);
}

/*int main ()
{
	putnbr(42,1);
}*/
