/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:42:17 by hatesfam          #+#    #+#             */
/*   Updated: 2023/02/05 16:52:31 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parseflags(va_list arg, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printchar(va_arg(arg, int));
	else if (c == 's')
		count += ft_printstr(va_arg(arg, char *));
	else if (c == 'p')
		count += ft_printptr(va_arg(arg, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_printnum(va_arg(arg, int));
	else if (c == 'u')
		count += ft_printunum(va_arg(arg, unsigned int));
	else if (c == 'X' || c == 'x')
		count += ft_printhexa(va_arg(arg, unsigned int), c);
	else if (c == '%')
		count += ft_printchar('%');
	return (count);
}
