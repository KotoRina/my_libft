/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:26:30 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:17:48 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dst;
	unsigned int	len_res;
	unsigned int	len;
	char			*d_copy;

	len = size;
	d_copy = dst;
	while (len-- && *d_copy != '\0')
		d_copy++;
	len_dst = d_copy - dst;
	len_res = size - len_dst;
	if (len_res == 0)
		return (len_dst + ft_strlen((char *)src));
	len_dst = ft_strlen(dst);
	len_res = ft_strlen((char *)src) + len_dst;
	len = 0;
	while (len_dst < size - 1 && src[len] != '\0')
	{
		dst[len_dst] = src[len];
		len++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (len_res);
}
