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

#include "../push_swap.h"

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
/*
t_node*	create_stack2(int argc, char **argv)
{
	int i;
	int num;

	i = 2;

	num = ft_atoi(argv[1]);
	stacka = new_node(num, 0);
	num = ft_atoi(argv[2]);
	stacka->next = new_node(num, 1);
	stacka->previous = stacka;
	ft_printf("%i : valor %i : index \n", stacka->num, stacka->index);
	ft_printf("%i : valor %i : index \n", stacka->next->num,
			stacka->next->index);
	add_back(&stacka, ft_atoi(argv[3]), 2);
	t_node *pnode;
	pnode = stacka;
	while (pnode->next)
	{
		pnode = pnode->next;
	}
	ft_printf("%i : valor %i index \n", pnode->num, pnode->index);

	free_struct(stacka);
} */


t_node *create_stack(char **num, int index)
{
    int lenarr;
    lenarr = len_darray(num);
    t_node *stacka;
    stacka = new_node(ft_atoi(num[index]));
    index++;
    while(index != lenarr)
    {
        add_back(&stacka,ft_atoi(num[index]));
        index++;
    }
	// o codigo termina aqui
	t_node *pstack;
	pstack = stacka;

	while(pstack->next)
	{
		pstack = pstack->next;
	}
	if(pstack->previous != NULL)
    return(stacka);
}
