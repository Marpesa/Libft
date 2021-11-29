/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:08 by lmery             #+#    #+#             */
/*   Updated: 2021/11/29 15:00:12 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr_r(const char *s, const char *w, int n)
{
	int	i;
	int	j;
	int	m;

	i = ft_strlen((char *)s);
	j = ft_strlen((char *)w);
	m = ft_strlen((char *)s) - n;
	if (j == 1 && w[j - 1] != s[i - 1])
		return (0);
	while (i > 0 && i > m && j > 0)
	{
		while (s[i] != w[j] && i > 0 && i > m)
			i--;
		while (s[i] == w[j] && i > 0 && i > m)
		{
			i--;
			j--;
		}
		if (j != 0)
			j = ft_strlen((char *)w);
	}
	if (j == 0)
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	a;
	int	b;
	char	*d;

	i = 0;
	a = ft_strlen((char *)set);
	b = ft_strlen((char *)s1);
	if (set == 0)
		return (ft_strdup(s1));
	if ((ft_strnstr(s1, set, a) != 0) && (ft_strnstr_r(s1, set, a) != 0))
		return (ft_substr(s1, a, (b - (2 * a))));
	if ((ft_strnstr(s1, set, a) == 0) && (ft_strnstr_r(s1, set, a) != 0))
		return (ft_substr(s1, 0, (b - a)));
	if ((ft_strnstr(s1, set, a) == 0) && (ft_strnstr_r(s1, set, a) == 0))
		return (ft_strdup(s1));
	if ((ft_strnstr(s1, set, a) != 0) && (ft_strnstr_r(s1, set, a) == 0))
		return (ft_substr(s1, a, (b - a)));
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*S = "  Bonjour Monsieur B  ";
	char	*set = " ";

	printf ("%s", (char *)ft_strtrim(S, set));
	return (0);
}
