/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:06:57 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/01 22:06:59 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;

	t = NULL;
	while (lst)
	{
		ft_lstadd_back(&t, ft_lstnew(f(lst->content)));
		if (!t)
			ft_lstclear(&t, del);
		lst = lst->next;
	}
	return (t);
}
