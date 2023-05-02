/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_extremums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:31:47 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:31:48 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int	ft_lst_max(t_list *lst)
{
	int	max;

	max = lst->nb;
	lst = lst->next;
	while (lst)
	{
		if (lst->nb > max)
			max = lst->nb;
		lst = lst->next;
	}
	return (max);
}

int	ft_lst_min(t_list *lst)
{
	int	min;

	min = lst->nb;
	lst = lst->next;
	while (lst)
	{
		if (lst->nb < min)
			min = lst->nb;
		lst = lst->next;
	}
	return (min);
}
