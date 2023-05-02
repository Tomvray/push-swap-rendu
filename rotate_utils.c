/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:00 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:36:00 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_uint	ft_nrot(t_uint pos_a, t_uint pos_b, t_uint size_a, t_uint size_b)
{
	t_uint	nb_rot;

	nb_rot = ft_max(pos_a, pos_b);
	if (nb_rot > size_a - pos_a + pos_b)
		nb_rot = size_a - pos_a + pos_b;
	if (nb_rot > size_b - pos_b + pos_a)
		nb_rot = size_b - pos_b + pos_a;
	if (nb_rot > ft_max((size_a - pos_a), (size_b - pos_b)))
		nb_rot = ft_max((size_a - pos_a), (size_b - pos_b));
	return (nb_rot);
}

void	ft_rot_rrb(t_list	**a, t_list	**b, t_uint pos_a, t_uint pos_b)
{
	t_uint	nb_rot;

	nb_rot = ft_nrot(pos_a, pos_b, ft_size(*a), ft_size(*b));
	if (nb_rot == ft_size(*b) - pos_b + pos_a)
	{
		ft_ra(a, pos_a);
		ft_rrb(b, ft_size(*b) - pos_b);
		return ;
	}
	if (ft_size(*a) - pos_a > ft_size(*b) - pos_b)
	{
		ft_rra(a, ft_size(*a) - pos_a - (ft_size(*b) - pos_b));
		ft_rrr(a, b, ft_size(*b) - pos_b);
	}
	else if (ft_size(*a) - pos_a < ft_size(*b) - pos_b)
	{
		ft_rrb(b, ft_size(*b) - pos_b - (ft_size(*a) - pos_a));
		ft_rrr(a, b, ft_size(*a) - pos_a);
	}
	else
		ft_rrr(a, b, ft_size(*a) - pos_a);
}

void	ft_smart_rotate(t_list **a, t_list **b, t_uint pos_a, t_uint pos_b)
{
	t_uint	nb_rot;

	nb_rot = ft_nrot(pos_a, pos_b, ft_size(*a), ft_size(*b));
	if (nb_rot == ft_max(pos_a, pos_b))
	{
		if (pos_a > pos_b)
		{
			ft_ra(a, pos_a - pos_b);
			ft_rr(a, b, pos_b);
		}
		else
		{
			ft_rb(b, pos_b - pos_a);
			ft_rr(a, b, pos_a);
		}
	}
	else if (nb_rot == ft_size(*a) - pos_a + pos_b)
	{
		ft_rra(a, ft_size(*a) - pos_a);
		ft_rb(b, pos_b);
	}
	else
		ft_rot_rrb(a, b, pos_a, pos_b);
}
