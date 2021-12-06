/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:01:08 by lmery             #+#    #+#             */
/*   Updated: 2021/12/06 11:18:25 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*new;
//	t_lsit	*temp;

	if (!f || !del)
	new = malloc(sizeof(lst));
	if (!new || !lst)
		return (0);
	ft_lstiter(lst, f);
	while (lst)
	{
		new = lst;
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
