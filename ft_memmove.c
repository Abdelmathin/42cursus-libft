/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:23:55 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 21:23:56 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = (s1 > s2) * (n - 1);
	while ((0 <= i) && (i < n) && (s1 != s2))
	{
		((char *)s1)[i] = ((char *)s2)[i];
		i += (s1 < s2) - (s1 > s2);
	}
	return (s1);
}
