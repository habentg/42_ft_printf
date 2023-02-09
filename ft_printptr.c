/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:45:42 by hatesfam          #+#    #+#             */
/*   Updated: 2023/02/09 13:54:58 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	writehex(unsigned long long p)
{
	if (p > 15)
	{
		writehex(p / 16);
		writehex(p % 16);
	}
	else if (p > 9)
		ft_printchar((p - 10) + 'a');
	else
		ft_printchar(p + '0');
}

int	countchar(unsigned long long p)
{
	int	count;

	count = 0;
	while (p != 0)
	{
		p = p / 16;
		count++;
	}
	return (count);
}

int	ft_printptr(unsigned long long p)
{
	int	count;

	count = 0;
	count = count + write(1, "0x", 2);
	if (p == 0)
		count = count + write(1, "0", 1);
	else
		writehex(p);
	count = count + countchar(p);
	return (count);
}
