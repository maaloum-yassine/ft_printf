/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:14:44 by ymaaloum          #+#    #+#             */
/*   Updated: 2025/03/10 11:49:40 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_length(unsigned int n)
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

int	ft_puthexa(unsigned int n, char index)
{
	int		length;
	char	*s;

	length = ft_length(n);
	if (index == 'x')
		s = "0123456789abcdef";
	else
		s = "0123456789ABCDEF";
	if ((int)n >= 0 && (int)n <= 15)
		ft_putchar(s[n]);
	else
	{
		ft_puthexa(n / 16, index);
		ft_puthexa(n % 16, index);
	}
	return (length);
}
