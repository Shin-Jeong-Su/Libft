/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:05 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/18 15:03:37 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_same_str(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (1);
		s1++;
		s2++;
		n--;
	}
	if (*s2 && (!n || !*s1))
		return (-1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			check;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
		{
			check = is_same_str(&haystack[i], needle, len - i);
			if (!check)
				return (&((char *)haystack)[i]);
			else if (check == -1)
				return (0);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n",ft_strnstr("teste","",0));
	printf("%s\n",ft_strnstr("abcdefgh","abc",2));
	printf("%s\n",ft_strnstr("aaxx","xx",4));
	printf("%s\n",ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("%s\n",ft_strnstr("aaabcabcd", "abcd", 9));
}
*/