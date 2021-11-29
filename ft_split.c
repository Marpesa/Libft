/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:11:12 by lmery             #+#    #+#             */
/*   Updated: 2021/11/29 18:14:15 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (s[i]);
}

int	ft_c_num(char const *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			i++;
			n++;
		}
		if (s[i] == c && s[i + 1] == c)
			i++;
	}
	return (n);
}

int	ft_count(char const *s, int i, char c)
{
	int	C;

	C = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			C++;
			i++;
		}
		while (s[i] != c)
			i++;
	}
	return (C);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	a = malloc(sizeof(char) * 
			while (s[i])
			{
			if (s[i] == c && s[i + 1] == c)
			i++;
			if (s[i] == c && s[i + 1] != c)
			{
			i++;
			k++;
			a[k] = malloc(sizeof(char) * ft_count(s, i, c));
			}
			j = 0;
			while (s[i] != c)
			{
			a[k][j] = s[i];
			j++;
			i++;
			}
			a[k][j] = 0;
			}
			return (a);
}
