/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:02:36 by lmery             #+#    #+#             */
/*   Updated: 2021/11/26 15:45:13 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *a)
{
	int	i;
	int	n;
	int	r;

	r = 0;
	n = 1;
	i = 0;
	while (a[i] >= 9 && a[i] <= 13 || a[i] == 32)
		i++;
	if (a[i] == '-')
		n = -n;
	if (a[i] == '-' || a[i] == '+')
		i++;
	while (a[i] >= '0' && a[i] <= '9')
	{
		r = r + (a[i] - 48);
		if (a[i + 1] >= '0' && a[i + 1] <= '9')
			r = 10 * r;
		i++;
	}
	r = r * n;
	return (r);
}

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*s = "4655555554354";
	char	*s1 = "464354";

	printf("%d \n", ft_atoi(s));
	printf("%d", atoi(s));
	return(0);
}