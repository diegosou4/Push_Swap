/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:21 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 14:26:42 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_node	*stacka;
	t_node	*stackb;
	t_node	*stackc;

	stackc = NULL;
	stacka = NULL;
	stackb = NULL;
	if (ac < 2)
		return (0);
	i = check_arg(ac, av, &stacka, &stackc);
	if (i == 0)
		return (0);
	my_sort(&stacka, &stackb, &stackc);
	return (0);
}
