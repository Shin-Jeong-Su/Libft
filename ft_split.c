/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:13:17 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/09 18:54:14 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	word_count(char const *s, char c)
{
	size_t	ret;
	int		i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			ret++;
		else if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			ret++;
		i++;
	}
	return (ret);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ret;
	char	*tmp;

	ret = (char *)malloc(sizeof(char) * n + 1);
	tmp = ret;
	while (*s1 && n--)
	{
		*tmp = *s1;
		tmp++;
		s1++;
	}
	*tmp = 0;
	return (ret);
}

int	is_deli(char const **s, char c)
{
	int	i;

	i = 0;
	while (**s && **s != c)
	{
		(*s)++;
		i++;
	}
	return (i);
}

void	is_not_deli(char const **s, char c)
{
	while (**s && **s == c)
	{
		(*s)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		**ret;
	char		*str;
	char const	*tmp;
	int			i;
	int			j;

	ret = (char **)malloc(sizeof(char *) * word_count(s, c) + 1);
	i = 0;
	j = 0;
	tmp = s;
	while (*s)
	{
		i = is_deli(&s, c);
		if (!*s || (*s == c && tmp != s))
		{
			str = ft_strndup(tmp, (size_t)i);
			ret[j++] = str;
		}
		is_not_deli(&s, c);
		tmp = s;
	}
	ret[j] = 0;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%zd\n",word_count("1-2-3",'-'));
	char * s= "--123----456--789--";
	char c = '-';
	int i=0;
	char ** ret = ft_split(s,c);
	while(ret[i])
	{
		printf("%s\n",ret[i]);
		i++;
	}
}
*/