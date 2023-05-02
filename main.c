/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:31:38 by tvray             #+#    #+#             */
/*   Updated: 2023/05/02 09:27:06 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;

	if (ac > 1)
	{
		a = ft_generate_a(ac, av);
		if (!a)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (!ft_is_sorted(a))
		{
			if (ft_size(a) == 2)
				ft_sa(&a);
			else if (ft_size(a) == 3)
				ft_sort_3(&a);
			else
				ft_sort(&a);
		}
		a = ft_del_lst(a);
	}
	return (0);
}
