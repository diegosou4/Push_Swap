/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createstruct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:33:38 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 15:21:05 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*new_node(int num)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}

void	add_back(t_node **node, int num)
{
	t_node	*last;
	t_node	*pnode;

	pnode = *node;
	last = new_node(num);
	while (pnode->next)
	{
		pnode = pnode->next;
	}
	last->previous = pnode;
	pnode->next = last;
}

t_node	*create_stack(char **num, int index)
{
	int		lenarr;
	t_node	*stacka;

	lenarr = len_darray(num);
	stacka = new_node(ft_atoi(num[index]));
	index++;
	while (index != lenarr)
	{
		add_back(&stacka, ft_atoi(num[index]));
		index++;
	}
	return (stacka);
}
