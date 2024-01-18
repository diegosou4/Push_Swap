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
	
	stacka = NULL;
	stackb = NULL;
	if (ac < 2)
		return (0);
	i = check_arg(ac, av,&stacka);
	t_node *pstacka;
	pstacka = stacka;
	printf("%i first %i second %i third \n", pstacka->num,pstacka->next->num, pstacka->next->next->num);
	reverse_rotate(&stacka);
	pstacka = stacka;
	printf("%i first %i second %i third \n", pstacka->num,pstacka->next->num, pstacka->next->next->num);
	return (0);
}