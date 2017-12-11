#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned char *src2;

	src2 = (unsigned char *)src;
	while ((len > 0) && (src2 != '\0'))
	{
		*dst = *src2;
		dst++;
		src2++;
		len--;
	}
	while (len > 0)
	{
		dst[i] = '\0';
		i++;
		len--;
	}
	return (dst);
}