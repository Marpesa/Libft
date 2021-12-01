/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:11:12 by lmery             #+#    #+#             */
/*   Updated: 2021/12/01 15:20:06 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sep(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(const char *str, char *charset)
{
	int	i;
	int	count;
	int	sep;

	i = -1;
	count = 0;
	sep = 1;
	while (str[++i])
	{
		if (sep)
		{
			if (!ft_sep(str[i], charset))
			{
				sep = 0;
				count++;
			}
		}
		else
			if (ft_sep(str[i], charset))
				sep = 1;
	}
	return (count);
}

int	*ft_words(const char *str, char *charset, int w)
{
	int	*tab;
	int	sep;
	int	i;
	int	j;

	i = -1;
	j = 0;
	sep = 1;
	tab = (int *)malloc(sizeof(*tab) * (2 * w));
	if (!tab)
		return (0);
	while (str[++i])
	{
		if (sep && (ft_sep(str[i], charset)) == 0)
			tab[(--sep) + (j++)] = i;
		if (sep == 0 && (ft_sep(str[i], charset)))
		{
			sep = 1;
			tab[j++] = i;
		}
	}
	if (j == 2 * w - 1)
		tab[j] = i;
	return (tab);
}

char	**ft_split_array(const char *str, char *charset)
{
	int		i;
	int		j;
	int		*words;
	char	**dest;
	int		size;

	words = ft_words(str, charset, ft_count(str, charset));
	i = 0;
	dest = (char **)malloc(sizeof(*dest)
			* (ft_count(str, charset) + 1));
	if (!dest)
		return (0);
	while (i < ft_count(str, charset))
	{
		size = sizeof(**dest) * (words[2 * i + 1] - words[2 * i] + 1);
		dest[i] = (char *)malloc(size);
		j = words[2 * i] - 1;
		while (++j < words[2 * i + 1])
			dest[i][j - words[2 * i]] = str[j];
		dest [i][j - words[2 * i]] = '\0';
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	return (ft_split_array(s, a));
}
