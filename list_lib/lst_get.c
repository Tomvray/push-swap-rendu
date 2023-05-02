/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:31:55 by tvray             #+#    #+#             */
/*   Updated: 2023/05/02 09:33:06 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lst_last(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

unsigned int	ft_size(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		size ++;
		lst = lst->next;
	}
	return (size);
}

t_list	*ft_geti(t_list *lst, unsigned int index)
{
	while (index)
	{
		lst = lst->next;
		index--;
	}
	return (lst);
}

int	ft_nb_in(t_list	*lst, int num)
{
	while (lst)
	{
		if (lst->nb == num)
			return (1);
		lst = lst->next;
	}
	return (0);
}
