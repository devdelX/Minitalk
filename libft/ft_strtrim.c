/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:09:52 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/01 22:09:55 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isfind(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strncpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	if (!s1)
		return (0);
	len = (int)ft_strlen(s1) - 1;
	if (!(*set))
		return (ft_strdup((char *)s1));
	while (isfind(s1[i], set))
		i++;
	if (len + 1 == i)
		return (ft_strdup(""));
	while (isfind(s1[len], set) == 1)
		len--;
	ptr = malloc((len - i + 1) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	return (ft_strncpy(ptr, (char *) s1 + i, len - i + 1));
}
/*#include <stdio.h>
int main()
{
    printf("%s",ft_strtrim("          "," \n\t"));
}*/
