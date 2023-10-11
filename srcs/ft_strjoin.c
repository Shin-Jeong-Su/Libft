/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:34:20 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 16:50:12 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ret;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)malloc(len + 1);
	i = 0;
	while (*s1)
	{
		ret[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ret[i] = *s2;
		s2++;
		i++;
	}
	ret[i] = 0;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	char const *s1 = "hello";
	char const *s2 = "world";
	printf("%s\n",ft_strjoin(s1,s2));
}
*/
