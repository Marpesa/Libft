/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:11:12 by lmery             #+#    #+#             */
/*   Updated: 2021/11/30 15:13:48 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nstrlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_c_num(char const *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

int	ft_s_num(char const *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	if (s[0] != c)
	{
		n++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			n++;
			i++;
		}
		if (s[i] == c && s[i + 1] == c)
			i++;
		i++;
	}
	if (s[i] == c)
		n--;
	return (n);
}

int	ft_count(char const *s, int i, char c)
{
	int	n;

	n = 0;
	while (s[i] != c)
	{
		i++;
		n++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int	i;
	int	k;

	i = 0;
	k = 0;
	a = (char **)malloc(sizeof(char *) * (ft_s_num(s, c) + 1));
	if (!a)
		return (0);
	if (s[0] != c)
	{
		a[k] = ft_substr(s, i, (ft_count(s, i, c)));
		k++;
	}
	while (s[i] && k <= ft_s_num(s, c))
	{
		if (s[i] != c && s[i - 1] == c)
		{
			a[k] = ft_substr(s, i, ft_count(s, i, c));
			k++;
		}
		i++;
	}
	a[k] = '\0';
	return (a);
}
