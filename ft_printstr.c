/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:45:44 by hatesfam          #+#    #+#             */
/*   Updated: 2023/01/31 14:32:28 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (ft_printstr("(null)"));
	else
	{
		while (str[count])
		{
			ft_printchar(str[count]);
			count++;
		}
	}
	return (count);
}
