/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:29:30 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 11:58:51 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_struct(t_node *node)
{
	t_node	*pnode;

	pnode = node;
	while (pnode->next)
	{
		pnode = pnode->next;
	}
	while (pnode->previous)
	{
		free(pnode);
		pnode = pnode->previous;
	}
	free(pnode);
	return (1);
}

void	free_array(char **num)
{
	int	lenarr;

	lenarr = (len_darray(num));
	while (lenarr != -1)
	{
		free(num[lenarr]);
		lenarr--;
	}
	free(num);
}

void	free_stack(t_node **stack)
{
	t_node	*p;
	t_node	*prev;

	p = find_last((*stack));
	while (p != NULL)
	{
		prev = p->previous;
		free(p);
		p = prev;
	}
	(*stack) = NULL;
}

void	free_pivot(t_node *pivot)
{
	t_node	*ptr;
	t_node	*prev;

	ptr = find_last(pivot);
	while (ptr != NULL)
	{
		prev = ptr->previous;
		free(ptr);
		ptr = prev;
	}
	pivot = NULL;
}
