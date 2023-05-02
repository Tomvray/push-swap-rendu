/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:35:57 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:35:57 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **a, unsigned int nb)
{
	t_list	*first;
	t_list	*bef_last;
	t_list	*last;

	while (nb)
	{
		first = *a;
		bef_last = first;
		while (bef_last && bef_last->next && bef_last->next->next)
			bef_last = bef_last->next;
		last = bef_last->next;
		last->next = first;
		bef_last->next = NULL;
		*a = last;
		write(1, "rra\n", 4);
		nb--;
	}
}

void	ft_rrb(t_list **b, unsigned int nb)
{
	t_list	*first;
	t_list	*bef_last;
	t_list	*last;

	while (nb)
	{
		first = *b;
		bef_last = first;
		while (bef_last && bef_last->next && bef_last->next->next)
			bef_last = bef_last->next;
		last = bef_last->next;
		last->next = first;
		bef_last->next = NULL;
		*b = last;
		write(1, "rrb\n", 4);
		nb--;
	}
}

void	ft_rrr(t_list **a, t_list **b, unsigned int nb)
{
	t_list	*first;
	t_list	*bef_last;
	t_list	*last;

	while (nb)
	{
		first = *a;
		bef_last = first;
		while (bef_last && bef_last->next && bef_last->next->next)
			bef_last = bef_last->next;
		last = bef_last->next;
		last->next = first;
		bef_last->next = NULL;
		*a = last;
		first = *b;
		bef_last = first;
		while (bef_last && bef_last->next && bef_last->next->next)
			bef_last = bef_last->next;
		last = bef_last->next;
		last->next = first;
		bef_last->next = NULL;
		*b = last;
		write(1, "rrr\n", 4);
		nb--;
	}
}
