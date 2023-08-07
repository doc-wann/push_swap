/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_overflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:19:22 by hdaniele          #+#    #+#             */
/*   Updated: 2023/08/07 17:25:41 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_is_overflow(char *overflower)
{
	int	value;
	int	len;

	overflower = ft_stringcleaner_int(overflower);
	if (overflower[0] == '-')
		overflower++;
	len = ft_strlen(overflower);
	if (len > 10)
	{
		write(2, "Error\n", 6);
		free(overflower);
		exit(1);
	}
	if (len == 10)
	{
		if (ft_strncmp("2147483647", overflower, 10) < 0)
		{
			write(2, "Error\n", 6);
			free(overflower);
			exit(1);
		}
	}
	free(overflower);
	return ;
}

char	*ft_stringcleaner_int(char *overflower)
{
	int	i;

	i = 0;
	while (!ft_isdigit(overflower[0]))
		overflower++;
	while (ft_isdigit(overflower[i]))
		i++;
	return (ft_substr(overflower, 0, i));
}
