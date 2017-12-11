#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned char *s2;
	size_t i;
	int j;

	i = ft_strlen(s1);
	s2 = (unsigned char*)malloc(sizeof(char)*(i + 1));
	if (s2 == NULL)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}	