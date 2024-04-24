/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:27:35 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 17:44:53 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*#include <unistd.h>
#include "ft_putchar.c"*/

int ft_putstr(char *s)
{
    size_t  len;

    len = ft_strlen(s);
    write (1, s, len);
    return ((int)len);
} 
