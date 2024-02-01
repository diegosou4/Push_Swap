/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:04:49 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 12:04:54 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	low_number(t_node **stacka)
{
	t_node	*ptr;
	t_node	*p;

	ptr = (*stacka);
	while (ptr)
	{
		p = ptr->next;
		while (p && ptr->num < p->num)
			p = p->next;
		if (p == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		ptr = ptr->next;
	}
	return (0);
}

int	last_number(t_node **stacka)
{
	t_node	*ptr;
	t_node	*last;

	ptr = (*stacka);
	last = (*stacka);
	while (last->next)
	{
		last = last->next;
	}
	if (last->num > ptr->num)
	{
		return (1);
	}
	return (0);
}

int	my_sort(t_node **stacka, t_node **stackb, t_node **stackc)
{
	int	tamlst;

	tamlst = ft_nodesize(stacka);
	if (tamlst == 3)
		case3(stacka);
	else if (tamlst == 5)
		case5(stacka, stackb);
	if (is_sorted(stacka) == 1)
	{
		free_stack(stacka);
		free_stack(stackc);
		return (1);
	}
	else
	{
		while (is_sorted(stacka) != 1)
			quicksort(stacka, stackb, stackc);
		if (is_sorted(stacka) == 1)
		{
			free_stack(stacka);
			free_stack(stackc);
			return (1);
		}
	}
	return (0);
}
