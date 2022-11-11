/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:24:03 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 14:24:04 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= start)
		start = s_len;
	if (s_len - start < len)
		len = s_len - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (sub && len)
		ft_memmove(sub, s + start, len);
	return (sub);
}
