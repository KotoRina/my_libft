/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:05:51 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:25:31 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *str1, const char *str2, size_t num)
{
	unsigned int	len;

	if (!str2)
		return (*str1);
	len = 0;
	while ((str1[len] || str2[len]) && len < (unsigned int)num)
	{
		if ((unsigned char)str1[len] != (unsigned char)str2[len])
			return ((unsigned char)str1[len] - (unsigned char)str2[len]);
		len++;
	}
	return (len < num ? (unsigned char)str1[len]
			- (unsigned char)str2[len] : 0);
}
