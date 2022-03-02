/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:07:51 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/02 11:41:34 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
/*
int main() {
    char m[] = "devdel ";
    ft_memset(m, 'd', 3);
    printf("%s",ft_memset(m,'3',5));
    return 0;
}*/
