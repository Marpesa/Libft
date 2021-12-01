/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:43:42 by lmery             #+#    #+#             */
/*   Updated: 2021/12/01 16:35:13 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int i)
{
	int	a;

	a = 0;
	if (i < 0)
		a++;
	while (i != 0)
	{
		i = i / 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*r;

//	if (n == 0)
//		return ("");
	r = (char *)malloc(sizeof(char) * (ft_count(n) + 1));
	if (!r)
		return (0);
	i = ft_count(n) - 1;
	r[ft_count(n)] = '\0';
	if (n < 0)
	{	
		r[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		r[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (r);
}
