#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

void    ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putendl_fd(char *s, int fd);
char    *ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int nb);


#endif 
