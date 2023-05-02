/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:32:09 by tvray             #+#    #+#             */
/*   Updated: 2023/05/02 09:32:33 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				nb;
	struct s_list	*next;
}	t_list;

t_list			**ft_lst_addback(t_list **lst, t_list *new);
t_list			*ft_lst_last(t_list *lst);
t_list			*ft_new(int nb);
void			*ft_del_lst(t_list	*lst);
int				ft_nb_in(t_list	*lst, int num);
int				ft_is_sorted(t_list *a);
unsigned int	ft_size(t_list *lst);
t_list			*ft_geti(t_list *lst, unsigned int index);
int				ft_lst_max(t_list *lst);
int				ft_lst_min(t_list *lst);

#endif