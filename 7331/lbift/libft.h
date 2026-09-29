#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

void    ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putendl_fd(char *s, int fd);
char    *ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int nb);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
size_t     ft_strlen(const char *s);
char     *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
size_t     ft_strncmp(char *s1, char *s2, size_t n);
size_t    ft_atoi(const char *s);
char *ft_strdup(const char *str);


#endif