/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 08:58:53 by lmery             #+#    #+#             */
/*   Updated: 2021/11/23 12:21:38 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	int	i;

	i = 0;
	a = (unsigned char *)s;
	while(i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return(s);
}

#include <stdio.h>
#include <string.h>

int	main(void *s, int c, int n)
{
	char	*str;
	int	len;

	c = 3;
	n = 5;
	str = "poule";
	s = str;
	len = 0;

	for(len < 5; len++;)
		printf("%d", str[len]);
	printf("\n");
	ft_memset(s, c, n);
	len = 0;
        for(len < 5; len++;)
                printf("%d", str[len]);
        printf("\n");
	n = 5;
	str = "poule";
	s = str;
	len = 0;
	memset(s, c, n);
        for(len < 5; len++;)
                printf("%d", str[len]);
	return(0);
}
