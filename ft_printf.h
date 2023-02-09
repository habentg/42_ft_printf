/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:03:52 by hatesfam          #+#    #+#             */
/*   Updated: 2023/01/31 11:46:48 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_parseflags(va_list arg, char c);
int		ft_printhex(unsigned int n);
int		ft_printptr(unsigned long long p);
int		ft_printnum(int n);
int		ft_printhexa(unsigned int p, const char c);
int		ft_printstr(char *str);
int		ft_printchar(int c);
int		ft_printunum(unsigned int num);
char	*ft_itoa(int n);

#endif