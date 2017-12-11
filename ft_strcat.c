#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = ft_strlen(s1);
	i++;
	j = 0;
	while (s2[j])
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	return (s1);
}