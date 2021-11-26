/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:44:59 by lmery             #+#    #+#             */
/*   Updated: 2021/11/26 16:57:26 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, int n)
{
	unsigned char	*s;
	int		i;

	s = (unsigned char *)src;
	i = 0;
	while (c != s[i] && i < n)
	{
		if (s[i] == '\0' || i == n - 1)
			return (0);
		i++;
	}
	return ((char *)&s[i]);
}
