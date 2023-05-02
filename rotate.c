/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:03 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:36:04 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_lib/lst.h"

void	ft_ra(t_list **a, unsigned int nb)
{
	t_list	*first;
	t_list	*sec;
	t_list	*last;

	while (nb)
	{
		first = *a;
		sec = (*a)->next;
		last = ft_lst_last(*a);
		last->next = first;
		first->next = NULL;
		*a = sec;
		write(1, "ra\n", 3);
		nb--;
	}
}

void	ft_rb(t_list **b, unsigned int nb)
{
	t_list	*first;
	t_list	*sec;
	t_list	*last;

	while (nb)
	{
		first = *b;
		sec = (*b)->next;
		last = ft_lst_last(*b);
		last->next = first;
		first->next = NULL;
		*b = sec;
		write(1, "rb\n", 3);
		nb--;
	}	
}

void	ft_rr(t_list **a, t_list **b, unsigned int nb)
{
	t_list	*first;
	t_list	*sec;
	t_list	*last;

	while (nb)
	{
		first = *a;
		sec = (*a)->next;
		last = ft_lst_last(*a);
		last->next = first;
		first->next = NULL;
		*a = sec;
		first = *b;
		sec = (*b)->next;
		last = ft_lst_last(*b);
		last->next = first;
		first->next = NULL;
		*b = sec;
		write(1, "rr\n", 3);
		nb--;
	}
}
