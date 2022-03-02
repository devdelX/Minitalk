/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:08:07 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/01 22:08:09 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;

	x = n;
	if (x < 0)
	{
		x = -x;
		write(fd, "-", 1);
	}
	if (x <= 9)
	{
		x = x + '0';
		write(fd, &x, 1);
	}
	else
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
}
/*
int main ()
{
    ft_putnbr_fd(465,1);
}*/
