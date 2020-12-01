/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:13:11 by djeraldi          #+#    #+#             */
/*   Updated: 2020/11/02 20:10:13 by djeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_num(int n)
{
	int len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static int	ft_size(int n)
{
	int size;
	int len;

	len = ft_count_num(n) - 1;
	size = 1;
	while (len--)
		size *= 10;
	return (size);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		size;
	char	value;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	size = ft_size(n);
	if (n < 0)
		write(fd, "-", 1);
	while (size > 0)
	{
		value = n / size;
		if (n < 0)
			value *= -1;
		value += '0';
		write(fd, &value, 1);
		n = n - n / size * size;
		size /= 10;
	}
}
