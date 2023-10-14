/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:08:54 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/14 21:48:38 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	len_src = 0;
	while (*dst)
	{
		dst++;
		len_dst++;
	}
	while (src[len_src])
		len_src++;
	if (len_dst >= size)
		return (len_src + size);
	size = size - len_dst - 1;
	while (*src && size--)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = 0;
	return (len_dst + len_src);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char d1[10] = "Hello";
	char d2[10] = "Hello";
	char *s1 = "Wolrd";
	char *s2 = "Wolrd";

	printf("%zu\n",ft_strlcat(d1,s1,3));
	printf("%s\n",d1);
	printf("%zu\n",strlcat(d2,s2,3));
	printf("%s\n",d2);
}
*/