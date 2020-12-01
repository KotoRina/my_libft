/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:54:49 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 19:30:09 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t count, size_t size)
{
	void			*buf;
	unsigned int	i;

	buf = (void *)malloc(count * size);
	if (!buf)
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		((char *)buf)[i] = 0;
		i++;
	}
	return (buf);
}
