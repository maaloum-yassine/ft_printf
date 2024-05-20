/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:30:28 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/11/09 23:12:38 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lengthnbr(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int		lenght;
	long	nombre;

	nombre = n;
	lenght = ft_lengthnbr(nombre);
	if (nombre < 0)
	{
		write(1, "-", 1);
		nombre *= -1;
	}
	if (nombre >= 0 && nombre <= 9)
	{
		nombre += 48;
		ft_putchar (nombre);
	}
	else
	{
		ft_putnbr(nombre / 10);
		ft_putnbr(nombre % 10);
	}
	return (lenght);
}
