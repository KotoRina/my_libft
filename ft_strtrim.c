/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:27:25 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:27:38 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char c, const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*point;
	int		left;
	int		right;
	int		i;

	if (!s1)
		return (NULL);
	left = 0;
	i = 0;
	right = ft_strlen((char *)s1) - 1;
	while (ft_check(s1[left], set))
		left++;
	while (ft_check(s1[right], set) && right > left)
		right--;
	if ((point = malloc(right - left + 2)) == 0)
		return (NULL);
	point[i] = s1[left];
	while (left <= right)
	{
		i++;
		left++;
		point[i] = s1[left];
	}
	point[i] = '\0';
	return (point);
}
