/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:17:15 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 12:42:23 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_strchr.c"

static int  ft_format(va_list args, const char format)
{
    void    *ptr;

    if (format == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (format == 's')
        return (ft_putstr(va_arg(args, char *)));
    else
        return (-1);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int     len;
    int     i;

    len = 0;
    i = 0;
    va_start(args, str);

    while (str[i])
    {
        if(str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
        {
            ft_format(args, str[i + 1]);
        }
    }

    va_end(args);
    return (len);
}
