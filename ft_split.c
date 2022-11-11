/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:12:34 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 15:12:36 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	my_spliter(char **ret, char const *s, char c)
{
	int		i;
	int		count;

	count = 0;
	while (s[0])
	{
		i = 0;
		while (s[i] && (s[i] != c))
			i++;
		if (ret)
			ret[count] = ft_substr(s, 0, i);
		if (ret && ret[count] == NULL)
			return (-1);
		count++;
		while (s[i] && (s[i] == c))
			i++;
		s = s + i;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ret;

	if (!s)
		return (0);
	while (*s && *s == c)
		s++;
	if (!*s)
		return (ft_calloc(1, sizeof(char *)));
	ret = ft_calloc(my_spliter(0, s, c) + 1, sizeof(char *));
	if (my_spliter(ret, s, c) < 0)
	{
		i = 0;
		while (ret[i])
			free(ret[i++]);
		free(ret);
		return (NULL);
	}
	return (ret);
}
