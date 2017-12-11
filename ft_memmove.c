#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *dst1;
	unsigned char *src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;

	if (dst1 < src1)
	{
		i = -1;
		while (++i < len)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
		}
	}
	else
	{
		while (len > 0)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
			len--;
		}
	}
	return (dst);
}