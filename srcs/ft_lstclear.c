/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:05:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/14 19:03:59 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prv;

	while (*lst)
	{
		del((*lst)-> content);
		free((*lst)-> content);
		prv = *lst;
		*lst = (*lst)-> next;
		free(prv);
	}
}
