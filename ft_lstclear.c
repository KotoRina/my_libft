/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:39:29 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 19:41:28 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		elem = *lst;
		*lst = elem->next;
		free(elem);
	}
	*lst = NULL;
}
