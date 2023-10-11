/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:15:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 15:53:07 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*pos;
	int		i;

	i = 0;
	pos = (char *)malloc(count * size);
	while (pos[i])
	{
		pos = 0;
		i++;
	}
	return ((void *)pos);
}
/*
#include <stdio.h>
int main()
{
	int *p1 = ft_calloc(100,sizeof(int));
	int *p2 = calloc(100,sizeof(int));
	for(int i=0;i<100;i++)
		printf("%d",p1[i]);
	printf("\n");
	for(int i=0;i<100;i++)
		printf("%d",p2[i]);
}
*/
