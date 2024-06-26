/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:49:42 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/25 12:28:27 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_uilen(unsigned int nb)
{
	int	len;

	len = 1;
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

int	ft_putuint(unsigned int nb)
{
	int	len;

	len = ft_uilen(nb);
	if (nb > 9)
		ft_putuint(nb / 10);
	ft_putchar('0' + (nb % 10));
	return (len);
}
