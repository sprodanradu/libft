#include "libft.h"

int	ft_sqrt(int nr)
{
	int r;
	
	if (nr == 1)
		return (1);
	r = 2;
	while (r * r < nr)
		r++;
	return (r);
}