/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:02:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/05/20 05:11:11 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checkarg(const char *s, va_list countptr)
{
	int	count ;

	count = 0;
	if (*s == 'c')
		count += ft_putchar(va_arg(countptr, int));
	else if (*s == 's')
		count += ft_putstr(va_arg(countptr, char *));
	else if (*s == 'd' || *s == 'i')
		count += ft_putnbr(va_arg(countptr, int));
	else if (*s == 'u')
		count += ft_putnbr_ns(va_arg(countptr, unsigned int));
	else if (*s == 'x' || *s == 'X')
		count += ft_puthexa(va_arg(countptr, unsigned int), *(s));
	else if (*s == 'p')
	{
		count += ft_putstr("0x");
		count += ft_put_adress(va_arg(countptr, unsigned long));
	}
	else if (*s == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	countptr;
	int		count;

	count = 0;
	va_start (countptr, s);
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			s++;
			count += ft_checkarg(s, countptr);
		}
		else if (*s != '%')
			count += ft_putchar(*s);
		s++;
	}
	va_end(countptr);
	return (count);
}
