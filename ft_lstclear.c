/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:39:39 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 18:39:40 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !*lst)
		return ;
	ft_lstclear(&(*lst)->next, del);
	if (del && (*lst)->content)
		del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
