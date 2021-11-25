/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:23:06 by lmery             #+#    #+#             */
/*   Updated: 2021/11/25 17:02:20 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *w, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!w || w[j] == 0)
		return ((char *)&s[i]);
	while (s[i] && i < n - 1 && w[j])
	{
		while (s[i] != w[j] && s[i] && i < n - 1)
			i++;
		while (s[i] == w[j] && s[i] && i < n - 1)
		{
			i++;
			j++;
		}
		if (w[j] != '\0')
			j = 0;
	}
	if (w[j] == '\0')
		return ((char *)&s[i - j]);
	return (0);
}
