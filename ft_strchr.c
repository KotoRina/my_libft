/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:05:19 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:11:48 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int symb)
{
	int		len;
	char	*buf;

	buf = (char *)str;
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] == symb)
		{
			return (buf);
		}
		buf++;
		len++;
	}
	if (str[len] == symb && symb == '\0')
	{
		return (buf);
	}
	return (NULL);
}
