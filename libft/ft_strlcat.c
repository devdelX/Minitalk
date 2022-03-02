/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:08:54 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/02 11:42:54 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	j;
	size_t	len;

	lendst = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lendst)
		len += dstsize;
	else
		len += lendst;
	j = 0;
	while (src[j] != '\0' && lendst + 1 < dstsize)
		dst[lendst++] = src[j++];
	dst[lendst] = '\0';
	return (len);
}
/*
int main(void) {

  char dst[100] = "devdel";
  char src[100] = "devdel";

  printf ("// Retourne %lu\n", ft_strlcat(dst, src, 7));
  printf ("// dst = %s\n", dst);
  printf ("// src = %s\n", src);
  return 0;
  // destSize + src or dst len (destsize + great one)
}*/
