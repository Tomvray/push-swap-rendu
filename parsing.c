/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:32:58 by tvray             #+#    #+#             */
/*   Updated: 2023/05/02 09:03:09 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_atol(char *str, int *nb)
{
	int					sign;
	long int			num;

	num = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!('0' <= str[0] && str[0] <= '9'))
		return (0);
	while ('0' <= str[0] && str[0] <= '9')
	{
		num = num * 10 + sign * (str[0] - '0');
		if (num > 2147483647 || num < -2147483648)
			return (0);
		str++;
	}
	*nb = (int) num;
	if (!(!str[0] || str[0] == '\t' || str[0] == ' '))
		return (0);
	return (1);
}

t_list	*ft_str_to_a(char	*str, t_list	*a)
{
	t_list	*new;
	t_list	*to_add;
	int		nb;

	to_add = NULL;
	while (*str == ' ' || *str == '\t')
			str++;
	while (*str)
	{
		if (!ft_atol(str, &nb) || ft_nb_in(a, nb) || ft_nb_in(to_add, nb))
			return (ft_del_lst(to_add));
		new = ft_new(nb);
		if (!new)
			return (ft_del_lst(to_add));
		ft_lst_addback(&to_add, new);
		if (*str == '-' || *str == '+')
			str++;
		while (str[0] <= '9' && str[0] >= '0')
			str++;
		while (str[0] == ' ' || str[0] == '\t')
			str++;
	}
	return (to_add);
}

t_list	*ft_generate_a(int ac, char **av)
{
	t_list				*a;
	t_list				*to_add;
	unsigned long int	i;

	a = NULL;
	i = 1;
	while (i < ac)
	{
		to_add = ft_str_to_a(av[i], a);
		if (!to_add)
			return (ft_del_lst(a));
		ft_lst_addback(&a, to_add);
		i++;
	}
	return (a);
}
