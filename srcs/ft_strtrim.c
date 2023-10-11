/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:52:23 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 17:45:34 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			len++;
		i++;
	}
	ret = (char *)malloc(len + 1);
	i = 0;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
		{
			ret[i] = *s1;
			i++;
		}
		s1++;
	}
	ret[i] = 0;
	return (ret);
}
/*
#include<stdio.h>
int main()
{
	printf("%s\n",ft_strtrim("abcdefg","cde"));

}
*/
