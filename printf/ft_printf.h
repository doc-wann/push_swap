#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup2(const char *s1);
char	*ft_itoa2(int n);
int		ft_strlen2(const char *s);
char	*ft_itoa_unsigned2(unsigned int n);
char 	*dex(unsigned long decimalnum);
int		ft_printf(const char *format, ...);
char	*pointer(unsigned long decimal);
char	*dexs(unsigned long decimalnum);

#endif
