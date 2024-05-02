/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:56:00 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/25 16:19:51 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <time.h>

int main(void)
{
    char    c = 'j';
    char    *s = "Joestar";
    int     i = 4;
    int     d = 2;
    unsigned int id = 4242424242;
    int     real_res = 0;
    int     my_res = 0;
    real_res = printf("%c\n%s\n%i\n%d\n%u\n%x\n%X\n%p\n%%\n", c, NULL, i, d, id, id, id, s);
    my_res = ft_printf("%c\n%s\n%i\n%d\n%u\n%x\n%X\n%p\n%%\n", c, NULL, i, d, id, id, id, s);
    ft_printf("Real printf printed %i symbols\nMy printf printed %i symbols\n", real_res, my_res);
    /*ft_printf("%c\n", c);
    ft_printf("%s\n", s);
    ft_printf("%i\n", i);
    ft_printf("%d\n", d);
    ft_printf("%u\n", id);
    ft_printf("%x\n", id);
    ft_printf("%X\n", id);
    ft_printf("%p\n", &s);
    ft_printf("%%\n", &s);*/
    return (0);
}
