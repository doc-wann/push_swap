#include "ft_printf.h"

char	*iszero(unsigned long zero)
{
	char	*ret;

	if (zero == 0)
		ret = ft_strdup2("0");
	else 
		ret = ft_strdup2("80000000");
	return(ret);
}
char	*pointer(unsigned long decimal)
{
	char	*ret;
	char	*em;
	int		i;
	int		j;
	
	i = 0;
	em = dexs(decimal);
	ret = malloc(sizeof(char) * ft_strlen2(em) + 3);
	ret[ft_strlen2(em) + 2] = '\0';
	ret[0] = '0';
	ret[1] = 'x';
	j = 2;
	while(em[i] != '\0')
	{
		ret[j + i] = em[i];
		i++;
	}
	free(em);
	return(ret);
}

char	*dex(unsigned long decimalnum)
{
    long	quotient;
	long	remainder;
    int		i;
	int		j;
    char	*hexadecimalnum;
	
    quotient = decimalnum;
	i = 0;
	j = 0;
	if (decimalnum == 0 || decimalnum == (unsigned long)(-2147483648))
		return(iszero(decimalnum));
	while (decimalnum != 0 && i++ > -1)
		decimalnum = decimalnum / 16;
	hexadecimalnum = malloc(sizeof(char) * i + 1);
	hexadecimalnum[i--] = '\0';
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[i] = (48 + remainder);
        else
            hexadecimalnum[i] = (55 + remainder);
        quotient = quotient / 16;
		i--;
    }
    return (hexadecimalnum);
}

char	*dexs(unsigned long decimalnum)
{
    long	quotient;
	long	remainder;
    int		i;
	int		j;
    char	*hexadecimalnum;
 
    quotient = decimalnum;
	i = 0;
	j = 0;
	if (decimalnum == 0 || decimalnum == (unsigned long)(-2147483648))
		return(iszero(decimalnum));
	while (decimalnum != 0 && i++ > -1)
		decimalnum = decimalnum / 16;
	hexadecimalnum = malloc(sizeof(char) * i + 1);
	hexadecimalnum[i--] = '\0';
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[i] = (48 + remainder);
        else
            hexadecimalnum[i] = (87 + remainder);
        quotient = quotient / 16;
		i--;
    }
    return (hexadecimalnum);
}
