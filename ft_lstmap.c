/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:19:17 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/18 18:23:04 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_lst;

	new_lst = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new)
			ft_lstadd_back(&new_lst, new);
		else
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		lst = lst->next;
	}
	return (new_lst);
}
