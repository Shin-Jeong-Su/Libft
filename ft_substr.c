/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:08:11 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 16:33:58 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	ret = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == start)
		{
			while (len--)
			{
				ret[j] = s[i];
				i++;
				j++;
			}
			ret[j] = 0;
			return (ret);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *src = "hello world";
	printf("%s\n",ft_substr(src,0,10));
}
*/
