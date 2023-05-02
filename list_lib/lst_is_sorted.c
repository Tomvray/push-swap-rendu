/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_is_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:31:59 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:32:00 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int	ft_is_sorted(t_list *a)
{
	int	prev;

	if (!a)
		return (0);
	prev = a->nb;
	while (a->next)
	{
		a = a->next;
		if (a->nb < prev)
			return (0);
		prev = a->nb;
	}
	return (1);
}
