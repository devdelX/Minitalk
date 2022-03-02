/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:07:03 by abel-oua          #+#    #+#             */
/*   Updated: 2022/03/02 11:40:24 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first_list;

	first_list = (t_list *)malloc(sizeof(t_list));
	if (first_list == NULL)
		return (NULL);
	first_list->content = content;
	first_list->next = NULL;
	return (first_list);
}
/*
int main()
{
    t_list *p;
    p = ft_lstnew("devdel");
}*/
