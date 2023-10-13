/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:30:46 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/13 22:46:44 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	t_list **header = (t_list **)malloc(sizeof(t_list **));
	for (int i = 0; i < 4; i++)
	{
		int n = i;
		t_list *new = ft_lstnew(&n);
		ft_lstadd_back(header, new);
	}
	while (*header)
	{
		printf("%d\n", *(int *)(*header)->content);
		*header = (*header)->next;
	}
}