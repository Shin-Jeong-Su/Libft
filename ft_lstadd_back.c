/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:03:36 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/18 18:00:51 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	if (!lst)
		return ;
	pos = *lst;
	if (pos)
	{
		while (pos->next)
			pos = pos->next;
		pos->next = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>
int	main()
{
	t_list *lst=0;
	t_list *elem[4];
	char c[4];
	for(int i=0;i<4;i++){
		c[i]=i+'0';
		elem[i] = ft_lstnew(&c[i]);
		ft_lstadd_back(&lst,elem[i]);
	}
	if(!lst){
		printf("lst = 0");
		return 0;
	}
	for(int i=0;i<4;i++){
		printf("%c",*(char *)(lst[i]).content);
	}
}
*/