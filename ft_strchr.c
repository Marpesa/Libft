/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:40:42 by lmery             #+#    #+#             */
/*   Updated: 2021/11/25 13:33:59 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (c != s[i])
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&s[i]);
}
