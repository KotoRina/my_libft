/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:22:58 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:23:23 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str_n;
	unsigned int	i;

	if (!s)
		return (NULL);
	str_n = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (str_n == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str_n[i] = f(i, s[i]);
		i++;
	}
	str_n[i] = '\0';
	return (str_n);
}
