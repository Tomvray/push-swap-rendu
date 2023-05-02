/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:10 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:36:11 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_to_b(t_list	**a, t_list	**b)
{
	unsigned int	n;
	unsigned int	pos_a;
	t_list			*t;
	unsigned int	i;

	while (ft_size(*a) > 3 && !ft_is_sorted(*a))
	{
		pos_a = 0;
		i = 1;
		t = (*a)->next;
		n = ft_nrot(0, ft_pos_b((*a)->nb, *b), ft_size(*a), ft_size(*b));
		while (t)
		{
			if (n > ft_nrot(i, ft_pos_b(t->nb, *b), ft_size(*a), ft_size(*b)))
			{
				n = ft_nrot(i, ft_pos_b(t->nb, *b), ft_size(*a), ft_size(*b));
				pos_a = i;
			}
			i++;
			t = t->next;
		}
		ft_smart_rotate(a, b, pos_a, ft_pos_b(ft_geti(*a, pos_a)->nb, *b));
		ft_pb(a, b);
	}
}

void	ft_push_to_a(t_list	**a, t_list	**b)
{
	unsigned int	n;
	unsigned int	pos_b;
	t_list			*t;
	unsigned int	i;

	while (*b)
	{
		pos_b = 0;
		i = 1;
		t = (*b)->next;
		n = ft_nrot(ft_pos_a((*b)->nb, *a), 0, ft_size(*a), ft_size(*b));
		while (i < ft_size(*b))
		{
			if (n > ft_nrot(ft_pos_a(t->nb, *a), i, ft_size(*a), ft_size(*b)))
			{
				n = ft_nrot(ft_pos_a(t->nb, *a), i, ft_size(*a), ft_size(*b));
				pos_b = i;
			}
			i++;
			t = t->next;
		}
		ft_smart_rotate(a, b, ft_pos_a(ft_geti(*b, pos_b)->nb, *a), pos_b);
		ft_pa(a, b);
	}
}

void	ft_sort(t_list	**a)
{
	t_list	*b;

	b = NULL;
	ft_pb(a, &b);
	if (ft_size(*a) > 3 && !ft_is_sorted(*a))
		ft_pb(a, &b);
	ft_push_to_b(a, &b);
	if (!ft_is_sorted(*a))
		ft_sort_3(a);
	ft_push_to_a(a, &b);
	if (!ft_is_sorted(*a))
	{
		if (ft_get_index(*a, ft_lst_min(*a)) < ft_size(*a) / 2)
			ft_ra(a, ft_get_index(*a, ft_lst_min(*a)));
		else
			ft_rra(a, ft_size(*a) - ft_get_index(*a, ft_lst_min(*a)));
	}
}
