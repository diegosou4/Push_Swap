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
	t_node *pnode;
	pnode = stacka;

	stackb = new_node(5);
	add_back(&stackb,32);	
	add_back(&stackb,655);
	add_back(&stackb,59);		
	t_node *pnode2;
	pnode2 = stackb;
	
	printf("Antes \n");
	while(pnode2->next)
	{
		printf("stackb: %i\n", pnode2->num);
		pnode2 = pnode2->next;
	}
	printf("stackb: %i \n",pnode2->num);
	printf("Antes \n");
	while(pnode->next)
	{
		printf("stacka: %i\n", pnode->num);
		pnode = pnode->next;
	}
	printf("stackb: %i \n",pnode->num);
	push_swap(&stacka, &stackb);
	pnode2 = stackb;
	pnode = stacka;
	printf("Depois \n");
	
	while(pnode->next)
	{
		printf("stacka: %i\n", pnode->num);
		pnode = pnode->next;
	}
		printf("stackb: %i \n",pnode->num);
	printf("Depois \n");
	if(pnode2 != NULL)
	{
	while(pnode2->next != NULL)
	{
		printf("stackb: %i\n", pnode2->num);
		pnode2 = pnode2->next;
	}
		printf("stackb: %i \n",pnode2->num);
	}
	return (0);
}