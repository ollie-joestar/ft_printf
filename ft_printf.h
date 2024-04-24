/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:59:58 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 12:40:07 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int ft_putchar(int c);

size_t	ft_strlen(const char *str);
int ft_putstr(char *s);

#endif
