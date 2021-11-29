/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:01:52 by lmery             #+#    #+#             */
/*   Updated: 2021/11/29 09:51:14 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int n, int s)
{
	char	*a;
	int	i;

	a = malloc(n * s);
	i = 0;
	if (a == 0)
		return (0);
	while (i < n * s)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}