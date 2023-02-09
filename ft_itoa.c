/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:54:27 by hatesfam          #+#    #+#             */
/*   Updated: 2023/01/31 14:07:51 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numdigits(long num)
{
	size_t	i;

	if (num < 0)
		i = 1;
	else
		i = 0;
	while (1)
	{
		num /= 10;
		i++;
		if (num == 0)
			break ;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		numsize;
	char	*num_str;

	num = n;
	numsize = ft_numdigits(num);
	num_str = (char *)malloc((numsize + 1) * sizeof(char));
	if (!num_str)
		return (0);
	if (num < 0)
	{
		num_str[0] = '-';
		num *= -1;
	}
	num_str[numsize] = '\0';
	while (1)
	{
		num_str[numsize - 1] = (num % 10) + '0';
		num /= 10;
		numsize--;
		if (num == 0)
			break ;
	}
	return (num_str);
}
