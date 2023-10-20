/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:08:11 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/19 16:02:29 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	len_check(char const *s, unsigned int start, size_t *len)
{
	if (start >= ft_strlen(s))
		*len = 0;
	else
	{
		if (start + *len > ft_strlen(s))
			*len = ft_strlen(s) - start;
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;
	int		j;

	len_check(s, start, &len);
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
	printf("%s\n",ft_substr("hola", 4294967295,0));
	printf("%s\n",ft_substr("abc",0,12345678900));
	//system("leaks a.out");
}
*/