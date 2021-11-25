/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:37:22 by lmery             #+#    #+#             */
/*   Updated: 2021/11/25 13:32:09 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;
	int	n;

	n = 0;
	while (src[n])
		n++;
	i = 0;
	if (!dest || !src)
		return(0);
	if (size >0)
	{
		while (i < size && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (n);
}
