/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:28:01 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:28:26 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		len_sub;
	int		len_m;
	char	*sub;

	if (!s)
		return (NULL);
	len_m = ft_strlen((char *)s);
	len_sub = len_m - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if ((size_t)start >= ft_strlen((char *)s))
	{
		sub[0] = '\0';
		return (sub);
	}
	len_sub = 0;
	while (len_sub < (int)len && s[len_sub] != '\0')
	{
		sub[len_sub] = s[start];
		start++;
		len_sub++;
	}
	sub[len_sub--] = 0;
	return (sub);
}
