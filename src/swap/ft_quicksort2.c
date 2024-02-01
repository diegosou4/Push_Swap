/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:13:30 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 11:13:32 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	find_indexa(t_node **stack, int pivot, int sizestack)
{
	int		indexa;
	t_node	*ptrstart;

	indexa = 0;
	ptrstart = (*stack);
	while ((sizestack - indexa) != 0)
	{
		if (ptrstart->num < pivot)
		{
			break ;
		}
		ptrstart = ptrstart->next;
		indexa++;
	}
	return (indexa);
}

int	find_indexb(t_node **stack, int pivot, int sizestack)
{
	int		indexb;
	t_node	*ptrlast;

	indexb = 0;
	ptrlast = find_last(*stack);
	while ((sizestack - indexb) != 0)
	{
		if (ptrlast->num < pivot)
		{
			break ;
		}
		ptrlast = ptrlast->previous;
		indexb++;
	}
	return (indexb);
}

void	findindex(t_node **stack, int pivot)
{
	int		indexa;
	int		indexb;
	t_node	*ptr;

	indexa = find_indexa(stack, pivot, ft_nodesize(stack)) + 1;
	indexb = find_indexb(stack, pivot, ft_nodesize(stack)) + 1;
	ptr = (*stack);
	if (indexa < indexb || indexa == indexb)
	{
		while (indexa != 0)
		{
			rchoose(stack, 2);
			indexa--;
		}
	}
	else if (indexb < indexa)
	{
		while (indexb != 0)
		{
			rrchoose(stack, 2);
			indexb--;
		}
	}
}

int	givemepivot(t_node **stacka)
{
	t_node	*pstack;
	t_node	*last;
	int		nodesize;
	int		i;
	int		pivot;

	pstack = (*stacka);
	last = find_last(pstack);
	nodesize = ft_nodesize(stacka);
	i = 0;
	nodesize /= 2;
	while (i < nodesize)
	{
		pstack = pstack->next;
		i++;
	}
	pivot = pstack->num;
	pstack = (*stacka);
	pivot = (pstack->num + last->num + pivot) / 3;
	return (pivot);
}

int	sort_c(t_node **stackc, t_node **stackd)
{
	t_node	*p;

	p = (*stackc);
	while (p)
	{
		if (low_number(stackc) == 1)
		{
			push(stackd, stackc);
			p = (*stackc);
		}
		else
		{
			rotate(stackc);
			p = (*stackc);
		}
	}
	while ((*stackd))
	{
		push(stackc, stackd);
	}
	return (1);
}
