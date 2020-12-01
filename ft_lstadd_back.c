/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:37:45 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 19:38:47 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *begin;
	t_list *last;

	if (*lst != NULL)
	{
		begin = *lst;
		last = ft_lstlast(begin);
		last->next = new;
		last = last->next;
		last->next = NULL;
	}
	else
	{
		*lst = new;
		new->next = NULL;
	}
}
