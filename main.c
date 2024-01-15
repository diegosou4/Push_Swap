/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:21 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 15:06:51 by diemorei         ###   ########.fr       */
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
	t_node *pnode;
	pnode = stacka;
	printf("Antes \n");
	printf("stacka: %i\n", pnode->num);
	printf("stacka: %i\n", pnode->index);
	printf("stacka: %i\n", pnode->next->num);
	printf("stacka: %i\n", pnode->next->index);
	push_swap(&stacka, &stackb);
	return (0);
}