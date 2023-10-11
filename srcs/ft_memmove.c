/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:16:11 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/07 22:07:31 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == 0 || len == 0)
		return (dst);
	if (dst < src)
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = (unsigned char *)dst + (len - 1);
		s = (unsigned char *)src + (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	int	d1[10]={1,2,3,4,5,6,7,8,9,10};
	int	d2[10]={1,2,3,4,5,6,7,8,9,10};
	//char s1[10] = "World";
	//char s2[10] = "World";
	
	ft_memmove(d1,d1+1,9);
	memmove(d2,d2+1,9);

	for(int i=0;i<10;i++)
		printf("%d ",d1[i]);
	printf("\n");
	for(int i=0;i<10;i++)
		printf("%d ",d2[i]);
	return 0;
}
*/
