/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:45:29 by lmery             #+#    #+#             */
/*   Updated: 2021/11/30 17:34:24 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, int n)
{
	int	i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)a;
	s2 = (unsigned char *)b;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	if (s1[i] != s2[i] || s1[i] == 0 || s2[i] == 0)
		return (s1[i] - s2[i]);
	return (0);
}
