/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:51:26 by hatesfam          #+#    #+#             */
/*   Updated: 2023/01/31 14:28:29 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	count = ft_printstr(str);
	free(str);
	return (count);
}
