#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;
	unsigned char *str2;

	str2 = (unsigned char *)s;
	i = 1;
	while (*str2)
	{
		i++;
		str2++;
	}
	i--;
	return (i);
}