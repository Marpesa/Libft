/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:07:02 by lmery             #+#    #+#             */
/*   Updated: 2021/11/25 19:23:26 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	f_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, void *src, int n)
{
	int		i;
	char	*a;
	char	*b;

	a = src;
	b = dst;
	i = 0;
	if (src == 0 || dst == 0)
		return (0);
//	if (n >= f_strlen(a) || n > (f_strlen(b) + 1))
//		return (0);
	while (b[i] && i < n)
	{
		((char *)b)[i] = ((char *)a)[i];
		i++;
	}
	return(dst);
}

#include <string.h>
#include <stdio.h>
/*
int	main(void)
{
	int s[] = {97, 24, 2, 220};
	int	d[] = {2, 42, 22000};
	int		n;

	n = 1;
	printf("%s\n", ft_memcpy(d,s,n));
	printf("%s", memcpy(d,s,n));
	return (0);
}
*/
int	main(void)
{
	int		n;
	char	s[] = "papillon";
	char	d[] = "din";

	n = 5;
	printf("%s\n", ft_memcpy(d, s, n));
	printf("%s", memcpy(d, s, n));
	return (0);
}
