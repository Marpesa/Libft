/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:23:06 by lmery             #+#    #+#             */
/*   Updated: 2021/12/03 11:56:06 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *w, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((int)n < 0)
		n = ft_strlen(s);
	if (!w || w[j] == '\0')
		return ((char *)&s[i]);
	while (s[i] && i < n && w[j])
	{
		while (s[i] != w[j] && s[i] && i < n)
			i++;
		while (s[i] == w[j] && s[i] && i < n)
		{
			i++;
			j++;
		}
		if (w[j] != '\0')
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (w[j] == '\0')
		return ((char *)&s[i - j]);
	return (0);
}
