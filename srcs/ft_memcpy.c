/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:57:06 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/07 21:44:12 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	int	d1[10];
	int	d2[10];
	int	s1[10]={1,2,3};
	//int	s2[10]={1,2,3,4,5,6,7,8,9,10};
	ft_memcpy(d1,s1,sizeof(int)*2);
	memcpy(d2,s1,sizeof(int)*2);

	for(int i=0;i<3;i++)
		printf("%d ",d1[i]);
	printf("\n");
	for(int i=0;i<3;i++)
		printf("%d ",d2[i]);
}
*/
