/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:05 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 13:12:11 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp_h;
	char	*temp_n;

	while (*haystack && len--)
	{
		if (*haystack == *needle || *needle == 0)
		{
			temp_n = (char *)needle;
			temp_h = (char *)haystack;
			while (*temp_n)
			{
				if (*temp_n != *temp_h)
					break ;
				temp_n++;
				temp_h++;
			}
			if (*temp_n == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char *h = "hello wolrd";
	const char *n = " ";
	printf("%s\n",ft_strnstr(h,n,20));
	printf("%s\n",strnstr(h,n,20));

}
*/
