/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:56:42 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 11:56:47 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_node **stack)
{
	int		temp;
	t_node	*pnode;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return (0);
	}
	pnode = *stack;
	temp = pnode->num;
	pnode->num = pnode->next->num;
	pnode->next->num = temp;
	return (1);
}

int	push(t_node **dest, t_node **src)
{
	t_node	*node_to_push;

	node_to_push = *src;
	if (*src == NULL)
		return (0);
	*src = (*src)->next;
	if (*src)
		(*src)->previous = NULL;
	node_to_push->next = NULL;
	if (*dest == NULL)
	{
		*dest = node_to_push;
		return (1);
	}
	else
	{
		node_to_push->next = *dest;
		node_to_push->next->previous = node_to_push;
		*dest = node_to_push;
		return (1);
	}
	return (1);
}

int	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (*stack == NULL || stack == NULL)
		return (0);
	first = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->previous = NULL;
	last = (*stack);
	while (last->next)
	{
		last = last->next;
	}
	last->next = first;
	first->previous = last;
	first->next = NULL;
	return (1);
}

int	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (*stack == NULL || stack == NULL)
		return (0);
	last = (*stack);
	while (last->next)
	{
		last = last->next;
	}
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = *(stack);
	(*stack)->previous = last;
	(*stack) = last;
	return (1);
}
