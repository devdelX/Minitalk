/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:04:07 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/01 22:04:10 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include "../libft/libft.h"

static void	ft_tobin(unsigned char chr, int pidserv)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (chr % 2 == 1)
			kill(pidserv, SIGUSR1);
		if (chr % 2 == 0)
			kill(pidserv, SIGUSR2);
		chr = chr / 2;
		i++;
		usleep(200);
	}
}

static void	done(int sig)
{
	if (sig == SIGUSR1)
	{
		ft_putstr_fd("recived ✅\n", 1);
		exit(1);
	}
}

static void	ft_send(unsigned char *str, int pidserv)
{
	int	i;

	i = 0;
	while (str[i])
		ft_tobin((unsigned char)str[i++], pidserv);
	ft_tobin(0, pidserv);
}

int	main(int ac, char **av)
{
	int	pidserv;

	signal(SIGUSR1, &done);
	if (ac != 3)
	{
		ft_putstr_fd("❌ WRONG ARGUMENTS!\n", 1);
		return (1);
	}
	pidserv = ft_atoi(av[1]);
	if (!pidserv)
	{
		ft_putstr_fd("⛔ INVALID PID!\n", 1);
		return (1);
	}
	ft_send((unsigned char *)av[2], pidserv);
	while (1)
		usleep(500);
	return (0);
}
