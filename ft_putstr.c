/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:27:35 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 12:39:46 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *s)
{
    size_t  i;
    size_t  len;

    if (!s)
        return (ft_putchar('\0'));
    len = ft_strlen(s);
    i = 0;
    while (i <= len)
    {
        ft_putchar(s[i]);
        i++;
    }
    return ((int)len);
} 
