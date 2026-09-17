#include "libft.h"
#include <stdlib.h>

int ft_strlen(const char *s)
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}

int ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return 1;
		s++;
	}
	if (c == '\0')
		return 1;
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	char *s;

	if(!s1 || !set)
		return NULL;
	i = 0;
	j = ft_strlen(s1) - 1;
	while(s1[i] && ft_strchr(set, s1[i]))
		i++;
	while(j > i && ft_strchr(set, s1[j]))
		j--;
	s = malloc(sizeof(char) * (j - i + 2));
	if(!s)
		return NULL;
	k = 0;
	while(i <= j)
		s[k++] = s1[i++];
	s[k] = '\0';
	return s;
}

/* #include <stdio.h>
int main()
{
	char *s1 = "   Hello, World!   ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);

	printf("%s" , trimmed);
	return 0;
}/*