/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:15:54 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:15:56 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(const char *s1)
{
	int len;

	len = 0;
	while (*s1 != '\0')
	{
		len++;
		s1++;
	}
	return (len);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*point;
	int		i;

	if (!s1)
		return (NULL);
	i = 0;
	point = malloc(ft_size(s1) + ft_size(s2) + 1);
	if (point == 0)
		return (0);
	while (*s1 != '\0')
	{
		point[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		point[i] = *s2;
		i++;
		s2++;
	}
	point[i] = '\0';
	return (point);
}
