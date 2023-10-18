/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:57:06 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/17 17:32:20 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (0);
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
	//test1
	
	// char dst1[10];
	// char dst2[10];
	// char *src = "asdf";
	// ft_memcpy(dst2,src,0);
	// memcpy(dst1,src,0);
	// printf("dst1\n");
	// for(int i=0;i<10;i++){
	// 	printf("%c",dst1[i]);
	// }
	// printf("\n");
	// printf("dst2\n");
	// for(int i=0;i<10;i++){
	// 	printf("%c",dst2[i]);
	// }


	//test2
	// char *dst1 = 0;
	// char *dst2 = 0;
	// char *src = 0;
	// ft_memcpy(dst1,src,4);
	// printf("%s",dst1);
	// memcpy(dst2,src,4);
	// printf("%s",dst2);

	char *dst=0;
	char *src = "1";
	// ft_memcpy(dst,src,3);
	memcpy(dst,src,3);

}
*/