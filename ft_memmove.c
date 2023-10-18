/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:16:11 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/17 17:22:18 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	move_from_front(void *dst, const void *src, size_t *len)
{
	size_t			prv;

	while (*len)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src++;
		prv = (*len)--;
		if (*len > prv)
			break ;
	}
}

void	move_from_back(void *dst, const void *src, size_t *len)
{
	size_t			prv;

	while (*len)
	{
		*(unsigned char *)(dst + *len -1) = *(unsigned char *)(src + *len - 1);
		prv = (*len)--;
		if (*len > prv)
			break ;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ret;

	ret = dst;
	if (dst < src)
		move_from_front(dst, src, &len);
	else if (dst > src)
		move_from_back(dst, src, &len);
	else
		return (dst);
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	//test1
	
	// int	d1[10]={1,2,3,4,5,6,7,8,9,10};
	// int	d2[10]={1,2,3,4,5,6,7,8,9,10};
	// ft_memmove(d1,d1+1,9);
	// memmove(d2,d2+1,9);
	// for(int i=0;i<10;i++)
	// 	printf("%d ",d1[i]);
	// printf("\n");
	// for(int i=0;i<10;i++)
	// 	printf("%d ",d2[i]);
	// return 0;
	

	//test2
	char d1[4]="123";
	char d2[4]="123";
	char *s="456";
	
	printf("%s\n",ft_memmove(d2,s,2));
	printf("%s\n",memmove(d1,s,2));
}
*/