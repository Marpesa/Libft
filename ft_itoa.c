/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:43:42 by lmery             #+#    #+#             */
/*   Updated: 2021/11/30 18:33:23 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_itoa(int n)
{
	int	i;
	int	a;
	char	*r;
	
	a = 0;
	i = n;
	while (i != 0)
	{
		i = i / 10;
		a++;
	}
	printf("a: %d\n", a);
	if (n < 0)
		a++;
	r = (char *)malloc(sizeof(char) * (a + 1));
	if (!r)
		return (0);
	i = a;
//	printf("n: %d\n", n);
	if (n < 0)
	{	
		r[0] = '-';
		n = -n;
	}

	while (i > 0)
	{

		r[i] = n % 10;
		n = n / 10;
		i--;
	}
	printf("r: %s\n", r);
//	r[a + 1] = '\0';
	return (r);
}


int	main(void)
{
	int	n;

	n = 3564;
	printf("%s", ft_itoa(n));
	return (0);
}
