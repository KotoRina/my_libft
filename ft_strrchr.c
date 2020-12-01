/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:06:07 by djeraldi          #+#    #+#             */
/*   Updated: 2020/10/30 19:06:08 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_check(int buf_len, char *buf)
{
	if (buf_len != -1)
		return (buf);
	return (NULL);
}

static char		*ft_pos(char *buf, int buf_len)
{
	int			len;

	len = 0;
	while (len < buf_len)
	{
		buf++;
		len++;
	}
	return (buf);
}

char			*ft_strrchr(const char *str, int symb)
{
	int			len;
	int			buf_len;
	char		*buf;

	len = 0;
	buf = (char *)str;
	buf_len = -1;
	while (str[len] != '\0')
	{
		if (str[len] == symb)
		{
			buf_len = len;
		}
		buf++;
		len++;
	}
	if (str[len] == symb && symb == '\0')
	{
		buf_len = len;
	}
	len = 0;
	buf = (char *)str;
	buf = ft_pos(buf, buf_len);
	return (ft_check(buf_len, buf));
}
