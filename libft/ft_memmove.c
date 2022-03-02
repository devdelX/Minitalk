/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:07:44 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/02 11:41:05 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	if (d < s)
		ft_memcpy(d, s, len);
	else
	{
		while (i < len)
		{
			d[len - i - 1] = s[len - i - 1];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char	src[] = "";
	char	dest[]="";
    printf("%s\n",ft_memmove(dest, src, 50));
	char kkk[] = "";
	char lll[]="";
    printf("%s\n", memmove(lll, kkk,5));
    return 0;
}*/
