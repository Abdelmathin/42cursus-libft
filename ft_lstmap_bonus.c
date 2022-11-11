/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:56:12 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/06 18:56:13 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*last;

	if (!lst || !f)
		return (0);
	first = ft_lstnew(f(lst->content));
	last = first;
	while (last && lst->next)
	{
		lst = lst->next;
		last->next = ft_lstnew(f(lst->content));
		last = last->next;
	}
	if (!last)
		ft_lstclear(&first, del);
	return (first);
}
