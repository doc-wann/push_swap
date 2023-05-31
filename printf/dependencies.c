#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup2(const char *s1)
{
	char	*str;
	int		count;
	int		size;

	count = 0;
	size = 0;
	if (s1 == NULL)
		return(ft_strdup2("(null)"));
	while (s1[size] != '\0')
		size++;
	str = malloc(sizeof(char) * (size + 1));
	str[size] = '\0';
	while (s1[count])
	{
		str[count] = s1[count];
		count++;
	}
	return (str);
}

int	ft_strlen2(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

int	ft_count2(int n)
{
	int	len;

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

void	ft_alloc2(size_t len, char *x, int n)
{
	x[len] = '\0';
	if (n < 0)
	{
		x[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		x[0] = 48;
	while (len >= 0 && n > 0)
	{
		x[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
}

char	*ft_itoa2(int n)
{
	char	*x;
	size_t	len;

	if (n == -2147483648)
	{
		x = ft_strdup2("-2147483648");
		return (x);
	}
	len = ft_count2(n);
	x = malloc(sizeof(char) * len + 1);
	if (!x)
		return (NULL);
	ft_alloc2(len, x, n);
	return (x);
}
