#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s11;
	unsigned char *s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;

	while ((n > 0) && (*s11 == *s22))
	{
		s11++;
		s22++;
		n--;
	}
	return (*s11 - *s22);
}