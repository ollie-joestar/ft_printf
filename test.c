/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:56:00 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 17:50:32 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    char    c = 'j';
    char    *s = "Joestar";
    int     i = 4;
    int     d = 2;
    unsigned int id = 4242424242;
    printf("%c\n%s\n%i\n%d\n%u\n%x\n%X\n%p\n%%\n", c, s, i, d, id, id, id, &s);
    ft_printf("%c", c);
    ft_printf("%s", s);
    ft_printf("%i", i);
    ft_printf("%d", d);
    ft_printf("%u", id);
    ft_printf("%x", id);
    ft_printf("%X", id);
    ft_printf("%p", &s);
    return (0);
}
