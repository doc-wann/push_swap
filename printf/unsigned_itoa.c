#include "ft_printf.h"

int	ft_countu(unsigned int n)
{
	unsigned int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_allocu(size_t len, char *x, unsigned int n)
{
	x[len] = '\0';
	if (n == 0)
		x[0] = 48;
	while (len >= 0 && n > 0)
	{
		x[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
}

char	*ft_itoa_unsigned2(unsigned int n)
{
	char	*x;
	size_t	len;

	len = ft_countu(n);
	x = malloc(sizeof(char) * len + 1);
	if (!x)
		return (NULL);
	ft_allocu(len, x, n);
	return (x);
}
