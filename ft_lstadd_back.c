/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:32:59 by lmery             #+#    #+#             */
/*   Updated: 2021/12/06 11:33:18 by lmery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (!new)
		return ;
	while (*alst->next != NULL)
		*alst = *alst->next;
	temp = *alst;
	temp->next = new;
}
