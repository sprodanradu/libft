#include "libft.h"

static char	ft_tochar(int n)
{
	char c;

	c = 48 + n;
	return (c);
}

static long long ft_modulus(long long n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}

char		*ft_itoa(int n)
{
	int 		i;
	long long	nb;
	char		*str;
	int			len;

	nb = ft_modulus((long long)n);
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	if (n < 0)
	{
		str = (char*)malloc(sizeof(char) * (i + 2));
		len = i + 2;
		str[0] = '-';
	}
	else
	{
		str = (char*)malloc(sizeof(char) * (i + 1));
		len = (i + 1);
	}
	nb = ft_modulus((long long)n);
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len--] = nb % 10;
		nb = nb / 10;
	}
	str = ft_strrev(str);
	return (str);
}