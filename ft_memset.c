/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:44:18 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:07:20 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *dest, int value, size_t count)
{
	char	*point;

	point = dest;
	while (count--)
	{
		*point = value;
		point++;
	}
	return (dest);
}
