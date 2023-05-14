#include "ft_printf.h"

char	*ft_conversion(char c)
{
	char	*car;

	car = malloc(sizeof(char) * 2);
	car[0] = c;
	car[1] = '\0';
	return (car);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

char	*unsignedcut (unsigned int core, int in, unsigned int keep)
{
	char	*ret;
	int		i;

	keep = core;
	while (core / 10)
	{
		core = core / 10;
		in++;
	}
	ret = malloc(sizeof(char) * in + 1);
	ret[in + 1] = '\0';
	i = in;
	in = 0;
	while (in != i)
	{
		ret[in]= (keep % 10) + 48;
		keep = keep / 10;
		in++;
	}
	return (ret);
}

char	*search(char format, va_list arg)
{
	char	*ret;

	ret = "0";
	if (format == 'i')
		ret = ft_itoa2(va_arg(arg, int));
	if (format == 's')
		ret = ft_strdup2(va_arg(arg, char *));
	if (format == '%')
		ret = ft_strdup2("%");
	if (format == 'c')
		ret = ft_conversion(va_arg(arg, unsigned int));
	if (format == 'd')
		ret = ft_itoa2(va_arg(arg, int));
	if (format == 'u')
		ret = ft_itoa_unsigned2(va_arg(arg, unsigned int));
	if (format == 'p')
		ret = pointer(va_arg(arg, unsigned long));
	if (format == 'X')
		ret = dex(va_arg(arg, unsigned long));
	if (format == 'x')
		ret = dexs(va_arg(arg, unsigned long));
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	va_start(arg, format);
	int	c;
	char	*ret;
	int	i;

	c = 0;
	i = 0;
	while (format[c])
	{
		if (format[c] == '%')
		{
			ret = search(format[c + 1], arg);
			write(1, ret, ft_strlen2(ret));
			c += 2;
			i += ft_strlen2(ret) - 2;
			free(ret);
			ret = NULL;
		}
		else
			c += ft_putchar(format[c]);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
			return (0);
		}
	}
	i = i + c;
	return (i);
}
