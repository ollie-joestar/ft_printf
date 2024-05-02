/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:10:40 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/25 18:26:56 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = ft_calloc ((len + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (!len)
		return (ptr);
	while (i < len && s[i + start])
	{
		ptr[i] = (unsigned char)s[i + start];
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
//	if (argc == 2)
//	{
//		printf("%s\n",argv[1]);
		printf("%s\n",ft_substr("hola", 4294967295, 0));
		return (0);
//	}
}*/
