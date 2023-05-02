/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:06 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:36:06 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_get_index(t_list *stack, int nb)
{
	int	i;

	i = 0;
	while (stack->nb != nb)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

unsigned int	ft_max(unsigned int a, unsigned int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_pos_a(int nb, t_list *a)
{
	int	i;

	if (nb < a->nb && (nb > ft_lst_last(a)->nb || ft_lst_last(a)->nb > a->nb))
		return (0);
	else if (nb > ft_lst_max(a) || nb < ft_lst_min(a))
		return (ft_get_index (a, ft_lst_min(a)));
	else
	{
		i = 1;
		while (!(nb > a->nb && nb < a->next->nb))
		{
			a = a->next;
			i++;
		}
	}
	return (i);
}

int	ft_pos_b(int nb, t_list *b)
{
	int	i;

	if (nb > b->nb && (nb < ft_lst_last(b)->nb || ft_lst_last(b)->nb < b->nb))
		return (0);
	else if (nb > ft_lst_max(b) || nb < ft_lst_min(b))
		return (ft_get_index (b, ft_lst_max(b)));
	else
	{
		i = 1;
		while (!(nb < b->nb && nb > b->next->nb))
		{
			b = b->next;
			i++;
		}
	}
	return (i);
}
