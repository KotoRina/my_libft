/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:39:22 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/04 14:39:23 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *memptr, int value, size_t num)
{
	const char *str;

	str = (const char *)memptr;
	while (num--)
	{
		if (*str == (char)value)
		{
			return ((void *)str);
		}
		str++;
	}
	return (NULL);
}
