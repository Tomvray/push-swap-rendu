/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:36:26 by tvray             #+#    #+#             */
/*   Updated: 2023/05/02 09:37:40 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "list_lib/lst.h"
# include <unistd.h>

typedef unsigned int	t_uint;
t_list	*ft_generate_a(int ac, char **av);
void	ft_sort_3(t_list **a);
void	ft_sort(t_list **a);
int		ft_pos_b(int nb, t_list *b);
int		ft_pos_a(int nb, t_list *a);
int		ft_get_index(t_list *stack, int nb);
t_uint	ft_max(unsigned int a, unsigned int b);
t_uint	ft_nrot(t_uint pos_a, t_uint pos_b, t_uint size_a, t_uint size_b);
void	ft_smart_rotate(t_list **a, t_list **b, t_uint pos_a, t_uint pos_b);
void	ft_ra(t_list **a, unsigned int nb);
void	ft_rra(t_list **a, unsigned int nb);
void	ft_rb(t_list **b, unsigned int nb);
void	ft_rrb(t_list **b, unsigned int nb);
void	ft_rr(t_list **a, t_list **b, unsigned int nb);
void	ft_rrr(t_list **a, t_list **b, unsigned int nb);
void	ft_sa(t_list **a);
void	ft_pa(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);

#endif