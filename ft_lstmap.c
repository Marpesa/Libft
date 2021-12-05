/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:01:08 by lmery             #+#    #+#             */
/*   Updated: 2021/12/05 17:15:53 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!f || !del
	new = malloc(sizeof(lst));
	if (!new)
		return (0);
	ft_lstiter(lst, f);
	while (lst)
	{
		if (
		new = lst;
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
