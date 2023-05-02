/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:13 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:36:13 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_list **a)
{
	int	first;
	int	sec;
	int	third;

	first = (*a)->nb;
	sec = (*a)->next->nb;
	third = (*a)->next->next->nb;
	if (sec < first && first < third)
		ft_sa(a);
	else if (first < third && third < sec)
	{
		ft_rra(a, 1);
		ft_sa(a);
	}
	else if (third < first && first < sec)
		ft_rra(a, 1);
	else if (third < sec && sec < first)
	{
		ft_sa(a);
		ft_rra(a, 1);
	}
	else if (sec < third && third < first)
		ft_ra(a, 1);
}
