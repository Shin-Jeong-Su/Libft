/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:08:11 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/18 18:57:33 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (s[i] && (size_t)j < len)
	{
		if ((size_t)i >= start)
			ret[j++] = s[i];
		i++;
	}
	ret[j] = 0;
	return (ret);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n",ft_substr("abc",0,12345678900));
	system("leaks a.out");
}
*/