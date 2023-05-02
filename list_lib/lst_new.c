/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:32:03 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:32:04 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	**ft_lst_addback(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return (lst);
	if (!*lst)
	{
		*lst = new;
		return (lst);
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
	return (lst);
}

t_list	*ft_new(int nb)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}
