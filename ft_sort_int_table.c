#include "libft.c"

int	*ft_sort_int_table(int *ar, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (ar[i] < ar[j])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (ar);
}