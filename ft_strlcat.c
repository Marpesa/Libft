/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:19:11 by lmery             #+#    #+#             */
/*   Updated: 2021/11/25 17:01:00 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	ft_strnlen(char *str, int s)
{
	int	b;

	b = 0;
	while (str[b] && b < s)
		b++;
	return (b);
}

int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strnlen(dest, size);
	if (!size || size == 0)
		return (ft_strlen(src));
	if (j == size)
		return (size + ft_strlen(src));
	while (src[i] && (j + i) < (size - 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + ft_strlen(src));
}