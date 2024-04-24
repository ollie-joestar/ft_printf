/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:59:26 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 18:04:23 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_hexlen(unsigned int nb)
{
    int len;

    len = 1;
    while (nb > 15)
    {
        len++;
        nb /= 16;
    }
    return (len);
}

int ft_puthex(unsigned long n, const char format)
{
    int     len;
    char    *base;
    
    base = "0123456789ABCDEF";
    if (format == 'x')
        base = "0123456789abcdef";
    len = ft_hexlen(n);
    if (n > 15)
        ft_puthex((n / 16), format);
    ft_putchar(base[n % 16]);
    return (len);
}
