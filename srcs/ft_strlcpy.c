/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:32:19 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/05 20:08:17 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	dstsize--;
	while (*src && dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = 0;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char d1[10] ="Hello";	
	char d2[10] ="Hello";	
	char *s1 ="World";	
	char *s2 ="World";

	printf("%zu\n",ft_strlcpy(d1,s1,4));
	printf("%s\n",d1);
	printf("%zu\n",strlcpy(d2,s2,4));
	printf("%s\n",d2);

}
*/
