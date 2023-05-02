/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:35:52 by tvray             #+#    #+#             */
/*   Updated: 2023/04/30 19:35:54 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_lib/lst.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*to_push;

	to_push = *a;
	*a = to_push->next;
	to_push->next = *b;
	*b = to_push;
	write(1, "pb\n", 3);
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*to_push;

	to_push = *b;
	*b = to_push->next;
	to_push->next = *a;
	*a = to_push;
	write(1, "pa\n", 3);
}
