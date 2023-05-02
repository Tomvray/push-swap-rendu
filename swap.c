/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:16 by tvray             #+#    #+#             */
/*   Updated: 2023/05/02 09:37:27 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_lib/lst.h"

void	ft_sa(t_list **a)
{
	t_list	*first;
	t_list	*sec;

	first = *a;
	sec = first->next;
	first->next = sec->next;
	sec->next = first;
	*a = sec;
	write(1, "sa\n", 3);
}
