/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:36:02 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 23:36:03 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (len && ft_strlen(haystack) < len)
		len = ft_strlen(haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (needle_len <= len - i++)
		if (ft_strncmp(haystack + i - 1, needle, needle_len) == 0)
			return ((char *)(haystack + i - 1));
	return (0);
}
