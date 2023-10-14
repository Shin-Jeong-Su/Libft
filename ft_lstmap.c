/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:19:17 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/14 19:02:47 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list *));
	while (lst)
	{
		new = ft_lstnew(f(lst-> content));
		del(lst-> content);
		ft_lstdelone(lst, del);
		lst = lst-> next;
	}
	return (new);
}
