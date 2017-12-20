#include "libft.h"

int	ft_maxint(int *ar, int size)
{
	int i;
	int max;

	i = 0;
	max = ar[0];
	while (i < size)
	{
		if (ar[i] > max)
			max = ar[i]
		i++;
	}
	return (max);
}