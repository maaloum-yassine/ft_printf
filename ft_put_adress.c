/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 04:51:25 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/11/09 22:53:05 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_length(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n > 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_put_adress(unsigned long n)
{
	int		count;
	char	*s;

	s = "0123456789abcdef";
	count = ft_length(n);
	if (n >= 0 && n <= 15)
		ft_putchar(s[n]);
	else
	{
		ft_put_adress(n / 16);
		ft_put_adress(n % 16);
	}
	return (count);
}
