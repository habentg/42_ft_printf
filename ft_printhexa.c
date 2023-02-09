/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:21:17 by hatesfam          #+#    #+#             */
/*   Updated: 2023/02/05 15:53:14 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	writehexxa(unsigned int p, const char c)
{
	if (p >= 16)
	{
		writehexxa(p / 16, c);
		writehexxa(p % 16, c);
	}
	else if (p > 9)
	{
		if (c == 'x')
			ft_printchar(p - 10 + 'a');
		else
			ft_printchar(p - 10 + 'A');
	}
	else
		ft_printchar(p + '0');
}

int	countcharhex(unsigned int p)
{
	int	count;

	count = 0;
	while (p != 0)
	{
		count++;
		p = p / 16;
	}
	return (count);
}

int	ft_printhexa(unsigned int p, const char c)
{
	int	count;

	count = 0;
	if (p == 0)
		count = count + write(1, "0", 1);
	else
		writehexxa(p, c);
	count = count + countcharhex(p);
	return (count);
}
