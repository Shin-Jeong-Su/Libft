/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:15:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/19 10:25:37 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pos;
	size_t			i;

	i = 0;
	pos = (unsigned char *)malloc(count * size);
	if (!pos)
		return (0);
	while (i < count * size)
		pos[i++] = 0;
	return ((void *)pos);
}
/*
#include <stdio.h>
int main()
{
	int	c = 0;
	int *p1 = ft_calloc((size_t)c,sizeof(int));
	int *p2 = calloc((size_t)c,sizeof(int));
	for(int i=0;i<c;i++)
		printf("%d",p1[i]);
	printf("\n");
	for(int i=0;i<c;i++)
		printf("%d",p2[i]);
}
*/