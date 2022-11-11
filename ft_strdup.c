/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:44:50 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 20:44:51 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		l1;
	void	*ret;

	l1 = ft_strlen(s1);
	ret = ft_calloc(l1 + 1, sizeof(char));
	if (ret)
		ft_memmove(ret, s1, l1);
	return (ret);
}
