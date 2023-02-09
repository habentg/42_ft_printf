/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:03:16 by hatesfam          #+#    #+#             */
/*   Updated: 2023/02/05 17:00:09 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_numdigits(unsigned int num)
{
	size_t	numsize;

	numsize = 0;
	while (num != 0)
	{
		num = num / 10;
		numsize++;
	}
	return (numsize);
}

char	*ft_uitoa(unsigned int num)
{
	char	*str;
	int		len;

	len = ft_numdigits(num);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

int	ft_printunum(unsigned int num)
{
	int		count;
	char	*str;

	count = 0;
	if (num == 0)
		return (ft_printchar('0'));
	str = ft_uitoa(num);
	count = ft_printstr(str);
	free(str);
	return (count);
}
