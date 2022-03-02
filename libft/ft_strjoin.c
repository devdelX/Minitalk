/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:08:48 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/01 22:08:49 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ministrjoin(char *ptr, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!ptr)
		return (0);
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	size;

	if (!s1)
		return (NULL);
	if (!s2)
		size = ft_strlen(s1);
	else
		size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(size * sizeof(char) + 1);
	ptr = ministrjoin(ptr, s1, s2);
	return (ptr);
}
