/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:57:07 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/25 12:25:22 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n > 9 || n < -9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int		nlen;
	long	nbr;

	nlen = ft_nbrlen(nb);
	if (nb < 0)
		ft_putchar('-');
	nbr = (long)nb * (1 - 2 * (nb < 0));
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
	return (nlen);
}
