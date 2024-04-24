/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:46:04 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 18:05:48 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_ptrlen(unsigned long nb)
{
    int len;

    len = 1;
    while (nb > 15)
    {
        len++;
        nb /= 16;
    }
    if (len == 15)
        len += ft_putchar('0');
    else if (len < 15)
        len += ft_putstr("0x");
    return (len);
}

int ft_putptr(unsigned long nb)
{
    int     len;
    char    *base;

    len = ft_ptrlen(nb);
        base = "0123456789abcdef";
    if (nb > 15)
        ft_puthex((nb / 16), 'x');
    ft_putchar(base[nb % 16]);
    return (len);
}
