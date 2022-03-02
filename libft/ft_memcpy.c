/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:07:36 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/01 22:07:38 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*st;

	str = (char *)dst;
	st = (char *)src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		str[i] = st[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char d[9];

    printf("%s",ft_memcpy(d,"mehdi",9));
}*/
