/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:21 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 17:33:10 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int i;
	t_node *stacka;
	t_node *stackb;
	t_node *stackc;
	stackc = NULL;
	stacka = NULL;
	stackb = NULL;
	if (ac < 2)
		return (0);
	i = check_arg(ac, av,&stacka, &stackc);
	my_sort(&stacka,&stackb,&stackc);
	return (0);
}