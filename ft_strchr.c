/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:32:15 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/24 11:34:13 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if ((unsigned const char)s[i] == (unsigned const char)c)
			return ((char *)s + i);
		i++;
	}
	if ((unsigned const char)c == '\0')
		return ((char *)s + i);
	return (0);
}
